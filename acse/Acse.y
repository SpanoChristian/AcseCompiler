%{
/*
 * Andrea Di Biagio
 * Politecnico di Milano, 2007
 * 
 * Acse.y
 * Formal Languages & Compilers Machine, 2007/2008
 */

/*************************************************************************

                   Compiler for the language LANCE

***************************************************************************/

#include <stdio.h>       
#include <stdlib.h>
#include <assert.h>
#include "axe_struct.h"
#include "axe_engine.h"
#include "symbol_table.h"
#include "axe_target_asm_print.h"
#include "axe_target_transform.h"
#include "axe_errors.h"
#include "collections.h"
#include "axe_expressions.h"
#include "axe_gencode.h"
#include "axe_utils.h"
#include "axe_array.h"
#include "axe_cflow_graph.h"
#include "cflow_constants.h"
#include "axe_transform.h"
#include "axe_reg_alloc.h"
#include "reg_alloc_constants.h"
#include "axe_io_manager.h"
#ifndef NDEBUG
#  include "axe_debug.h"
#endif

/* global variables */
int line_num;        /* this variable will keep track of the
                      * source code line number. Every time that a newline
                      * is encountered while parsing the input file, this
                      * value is increased by 1. This value is then used
                      * for error tracking: if the parser returns an error
                      * or a warning, this value is used in order to notify
                      * in which line of code the error has been found */
int num_error;       /* the number of errors found in the code. This value
                      * is increased by 1 every time a new error is found
                      * in the code. */
int num_warning;     /* As for the `num_error' global variable, this one
                      * keeps track of all the warning messages displayed */

/* errorcode is defined inside "axe_engine.c" */
extern int errorcode;   /* this variable is used to test if an error is found
                         * while parsing the input file. It also is set
                         * to notify if the compiler internal state is invalid.
                         * When the parsing process is started, the value
                         * of `errorcode' is set to the value of the macro
                         * `AXE_OK' defined in "axe_constants.h".
                         * As long as everything (the parsed source code and
                         * the internal state of the compiler) is correct,
                         * the value of `errorcode' is set to `AXE_OK'.
                         * When an error occurs (because the input file contains
                         * one or more syntax errors or because something went
                         * wrong in the machine internal state), the errorcode
                         * is set to a value that is different from `AXE_OK'. */
extern const char *errormsg; /* When errorcode is not equal to AXE_OK,
                         * this variable may be set to an error message to print
                         * if desired. */

extern int cflow_errorcode;   /* As for `errorcode' this value is used to
                        * test if an error occurs during the creation process of
                        * a control flow graph. More informations can be found
                        * analyzing the file `axe_cflow_graph.h'. */
                     
/* program informations */
t_program_infos *program;  /* The singleton instance of `program'.
                            * An instance of `t_program_infos' holds in its
                            * internal structure, all the useful informations
                            * about a program. For example: the assembly
                            * (code and directives); the symbol table;
                            * the label manager (see axe_labels.h) etc. */
t_cflow_Graph *graph;      /* An instance of a control flow graph. This instance
                            * will be generated starting from `program' and will
                            * be used during the register allocation process */

t_reg_allocator *RA;       /* Register allocator. It implements the "Linear
                            * scan" algorithm */

t_io_infos *file_infos;    /* input and output files used by the compiler */

t_list *breakStack = NULL;

extern int yylex(void);
extern void yyerror(const char*);

%}
%expect 1

/*=========================================================================
                          SEMANTIC RECORDS
=========================================================================*/

%union {            
   int intval;
   char *svalue;
   t_axe_expression expr;
   t_axe_declaration *decl;
   t_list *list;
   t_axe_label *label;
   t_while_statement while_stmt;
   t_iterate_statement iterate_stmt;
   t_invariant_statement invariant_stmt;
   t_when_stmt when_stmt;
   t_loop_decreasing_stmt loop_decr_stmt;
   t_converge_stmt converge_stmt;
} 
/*=========================================================================
                               TOKENS 
=========================================================================*/
%start program

%token EOF_TOK /* end of file */
%token LBRACE RBRACE LPAR RPAR LSQUARE RSQUARE
%token SEMI PLUS MINUS MUL_OP DIV_OP
%token AND_OP OR_OP NOT_OP
%token ASSIGN LT GT SHL_OP SHR_OP EQ NOTEQ LTEQ GTEQ
%token ANDAND OROR
%token COMMA
%token RETURN
%token READ
%token WRITE
%token <iterate_stmt> ITERATE
%token TIMES
%token UNLESS
%token BRANGE
%token SLICE
%token VCMP
//%token FROM REPEAT ONLY STEPPING
%token COUNT
%token<when_stmt> WHEN
%token INTO
%token DOLLAR AT
%token SUM WEIGHTED BY
%token RMSPLICE LMSPLICE DOT
%token VEC_XOR
%token INTERVAL

%token BREAK
%token <converge_stmt> CONVERGE
%token <loop_decr_stmt> LOOP_DECREASING
%token <invariant_stmt> INVARIANT
%token <label> DO
%token <while_stmt> WHILE
%token <label> IF
%token <label> ELSE
%token <intval> TYPE
%token <svalue> IDENTIFIER
%token <intval> NUMBER

%type <expr> exp
%type <decl> declaration
%type <list> declaration_list
%type <label> if_stmt
%type <intval> when_list
%type <intval> when_block
%type <list> exp_list
%type <intval> range
%type <intval> range_list

/*=========================================================================
                          OPERATOR PRECEDENCES
 =========================================================================*/

%left COMMA
%left ASSIGN
%left OROR
%left ANDAND
%left OR_OP
%left AND_OP
%left EQ NOTEQ
%left LT GT LTEQ GTEQ
%left SHL_OP SHR_OP
%left MINUS PLUS
%left MUL_OP DIV_OP
%right NOT_OP
%left DOLLAR AT
%left DOT

/*=========================================================================
                         BISON GRAMMAR
=========================================================================*/
%% 

/* `program' is the starting non-terminal of the grammar.
 * A program is composed by:
      1. declarations (zero or more);
      2. A list of instructions. (at least one instruction!).
 * When the rule associated with the non-terminal `program' is executed,
 * the parser notifies it to the `program' singleton instance. */
program  : var_declarations statements EOF_TOK
         {
            /* Notify the end of the program. Once called
             * the function `set_end_Program' - if necessary -
             * introduces a `HALT' instruction into the
             * list of instructions. */
            set_end_Program(program);

            /* return from yyparse() */
            YYACCEPT;
         }
;

var_declarations : var_declarations var_declaration   { /* does nothing */ }
                 | /* empty */                        { /* does nothing */ }
;

var_declaration   : TYPE declaration_list SEMI
                  {
                     /* update the program infos by adding new variables */
                     set_new_variables(program, $1, $2);
                  }
;

declaration_list  : declaration_list COMMA declaration
                  {  /* add the new declaration to the list of declarations */
                     $$ = addElement($1, $3, -1);
                  }
                  | declaration
                  {
                     /* add the new declaration to the list of declarations */
                     $$ = addElement(NULL, $1, -1);
                  }
;

declaration : IDENTIFIER ASSIGN NUMBER
            {
               /* create a new instance of t_axe_declaration */
               $$ = alloc_declaration($1, 0, 0, $3);

               /* test if an `out of memory' occurred */
               if ($$ == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
            | IDENTIFIER LSQUARE NUMBER RSQUARE
            {
               /* create a new instance of t_axe_declaration */
               $$ = alloc_declaration($1, 1, $3, 0);

                  /* test if an `out of memory' occurred */
               if ($$ == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
            | IDENTIFIER
            {
               /* create a new instance of t_axe_declaration */
               $$ = alloc_declaration($1, 0, 0, 0);
               
               /* test if an `out of memory' occurred */
               if ($$ == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
;

/* A block of code can be either a single statement or
 * a set of statements enclosed between braces */
code_block  : statement                  { /* does nothing */ }
            | LBRACE statements RBRACE   { /* does nothing */ }
;

/* One or more code statements */
statements  : statements statement       { /* does nothing */ }
            | statement                  { /* does nothing */ }
;

/* A statement can be either an assignment statement or a control statement
 * or a read/write statement or a semicolon */
statement   : assign_statement SEMI          { /* does nothing */ }
            | control_statement              { /* does nothing */ }
            | read_write_statement SEMI      { /* does nothing */ }
            | iterate_statement SEMI         { /* does nothing */ }
            | loop_decreasing_statement SEMI { /* does nothing */ }
            | count_when_into_statement SEMI { /* does nothing */ }
            | vec_xor_statement SEMI         { /* does nothing */ }
            | SEMI                           { gen_nop_instruction(program); }
;

vec_xor_statement :
   VEC_XOR LPAR IDENTIFIER COMMA IDENTIFIER COMMA IDENTIFIER RPAR 
/*   $1     $2      $3      $4      $5       $6       $7      $8     */
   {
      t_axe_variable *r_c = getVariable(program, $3);
      t_axe_variable *r_a = getVariable(program, $5);
      t_axe_variable *r_b = getVariable(program, $7);

      /* Check if all the variables are arrays */
      if (!(r_a->isArray || r_b->isArray || r_c->isArray)) {
         yyerror("I accept arrays only.");
      } else {
         if (r_a->arraySize != r_b->arraySize || r_b->arraySize != r_c->arraySize) {
            yyerror("I accept arrays of the same size only");
         } else {
               /* We could also implement it with Loop Unrolling, but for
                  inefficiency we do not do that. Rather, we use Assembly rationale.
                  Use Loop Unrolling ONLY FOR SMALL ITERATIONS!
               */

               int r_i = gen_load_immediate(program, 0);
               t_axe_label *next = assignNewLabel(program);

               handle_binary_comparison(program, 
                                        create_expression(r_i, REGISTER),
                                        create_expression(r_c->arraySize, IMMEDIATE),
                                        _LT_);

               t_axe_label *exit = newLabel(program);
               gen_beq_instruction(program, exit, 0);

               /* Loop Body */
               int r_v1 = loadArrayElement(program, $5, create_expression(r_i, REGISTER));
               int r_v2 = loadArrayElement(program, $7, create_expression(r_i, REGISTER));
               int r_dest = getNewRegister(program);

               gen_eorb_instruction(program, r_dest, r_v1, r_v2, CG_DIRECT_ALL);
               
               storeArrayElement(program, $3, 
                  create_expression(r_i, REGISTER), 
                  create_expression(r_dest, REGISTER));

               gen_addi_instruction(program, r_i, r_i, 1);
               gen_bt_instruction(program, next, 0);

               assignLabel(program, exit);
         }
      }
      free($3);
      free($5);
      free($7);
   }
;

loop_decreasing_statement :
   LOOP_DECREASING IDENTIFIER BY
/*       $1            $2     $3   */
   { // $4
      $1.l_check = newLabel(program);
      gen_bt_instruction(program, $1.l_check, 0);

      $1.l_loop = assignNewLabel(program);
   }
   exp /* $5 */
   { /* $6 */
      int r_s = get_symbol_location(program, $2, 0);

      if ($5.expression_type == IMMEDIATE) {
         gen_subi_instruction(program, r_s, r_s, $5.value);
      } else {
         gen_sub_instruction(program, r_s, r_s, $5.value, CG_DIRECT_ALL);
      }

      assignLabel(program, $1.l_check);
      gen_subi_instruction(program, REG_0, r_s, 0);
      $1.l_exit = newLabel(program);
      gen_ble_instruction(program, $1.l_exit, 0);
   }
   code_block WHILE LPAR exp RPAR 
/*    $7       $8    $9  $10  $11   */
   {
      gen_bne_instruction(program, $1.l_loop, 0);
      assignLabel(program, $1.l_exit);

      free($2);
   }
;

count_when_into_statement : COUNT LBRACE when_list RBRACE INTO IDENTIFIER 
                        /*    $1    $2       $3      $4    $5     $6    */ 
                           {
                              t_axe_variable *v_dest = getVariable(program, $6);
                              if (v_dest->isArray)
                                 yyerror("Dest is an array.");
                              /* Retrieve the register of the variable */
                              int r_dest = get_symbol_location(program, $6, 0);
                              gen_add_instruction(program, r_dest, REG_0, $3, CG_DIRECT_ALL);
                           }
;

when_list : when_list COMMA when_block
         /*    $1      $2     $3       */
            {
               $$ = $1;
               gen_add_instruction(program, $$, $$, $3, CG_DIRECT_ALL);
            }
            | when_block
            /*   $1    */ 
            {
               $$ = $1;
            }
;

when_block: WHEN LPAR exp RPAR
         /*  $1   $2  $3   $4 */
            { /* $5 */
               int reg;
               $1.bypass = newLabel(program);
               t_axe_expression norm_exp = 
                     handle_binary_comparison(program,
                        $3,
                        create_expression(0, IMMEDIATE),
                        _NOTEQ_
                     );
               if (norm_exp.expression_type == IMMEDIATE) {
                  if (norm_exp.value == 0) {
                     reg = gen_load_immediate(program, 0);
                     gen_bt_instruction(program, $1.bypass, 0);
                  } else {
                     reg = gen_load_immediate(program, 1);
                  }
               } else {
                  reg = norm_exp.value;
                  gen_beq_instruction(program, $1.bypass, 0);
               }
               $1.reg = reg;
            }
            code_block 
         /*    $6    */
            { 
               assignLabel(program, $1.bypass);
               $$ = $1.reg;
            }
;

//from_repeat_if_statement : FROM LPAR assi RPAR REPEAT LBRACE code_block RBRACE ONLY IF LPAR exp RPAR STEPPING LPAR exp RPAR

iterate_statement  : ITERATE {
                        $1.i_reg = gen_load_immediate(program, 0);
                        $1.c_reg = getNewRegister(program);

                        $1.label_seed = newLabel(program);
                        gen_bt_instruction(program, $1.label_seed, 0);
                        $1.label_codeblock = assignNewLabel(program);
                     } 
                     code_block {
                        gen_addi_instruction(program, $1.i_reg, $1.i_reg, 1);
                        $1.label_condition = newLabel(program);
                        gen_bt_instruction(program, $1.label_condition, 0);
                        assignLabel(program, $1.label_seed);
                     }
                     TIMES LPAR exp RPAR {
                        if($7.expression_type == IMMEDIATE) {
                           /* $7.value is the ACTUAL value of the expression */
                           gen_move_immediate(program, $1.c_reg, $7.value);
                        } else {
                           /* $7.value is a REGISTER IDENTIFIER where the value of the
                              expression will be placed at runtime
                            */
                           gen_add_instruction(program, $1.c_reg, REG_0, $7.value, CG_DIRECT_ALL);
                        }
                        assignLabel(program, $1.label_condition);
                     }
                     UNLESS LPAR exp RPAR {
                        $1.label_exit = newLabel(program);
                        t_axe_expression cond_exp = handle_binary_comparison(program, $12, 
                                                    create_expression(0, IMMEDIATE),
                                                    _NOTEQ_);   /* exp2 != 0 */
                        if (cond_exp.expression_type == IMMEDIATE) {
                           if (cond_exp.value == 0) {
                              /* Ignore this case */
                           } else {
                              gen_bt_instruction(program, $1.label_exit, 0);
                           }
                        } else {
                           gen_bne_instruction(program, $1.label_exit, 0);
                        }
                        t_axe_expression loopCntExp = handle_binary_comparison(program, 
                                                      create_expression($1.i_reg, REGISTER), 
                                                      create_expression($1.c_reg, REGISTER),
                                                      _LT_);
                        gen_bne_instruction(program, $1.label_codeblock, 0);
                        assignLabel(program, $1.label_exit);
                     }
;


control_statement : if_statement         { /* does nothing */ }
            | while_statement            { /* does nothing */ }
            | do_while_statement SEMI    { /* does nothing */ }
            | return_statement SEMI      { /* does nothing */ }
            | converge_statement         { /* does nothing */ }
            | break_statement SEMI       { /* does nothing */ }
;

break_statement :
   BREAK
   {
      t_break_stmt *top = LDATA(breakStack);
      gen_bt_instruction(program, top->l_exit, 0);
   }
;

converge_statement :
   CONVERGE IDENTIFIER
/*    $1       $2       */
   {
      t_axe_variable *var = getVariable(program, $2);

      if (var->isArray) {
         yyerror("Unexpected argument to converge statement. Arrays are not accepted.");
         YYERROR;
      }

      $1.r_tmp = getNewRegister(program);
      $1.r_var = get_symbol_location(program, $2, 0);

      $1.l_loop = assignNewLabel(program);
      gen_add_instruction(program, $1.r_tmp, REG_0, $1.r_var, CG_DIRECT_ALL);
   } 
   code_block
   {
      gen_sub_instruction(program, REG_0, $1.r_var, $1.r_tmp, CG_DIRECT_ALL);
      gen_bne_instruction(program, $1.l_loop, 0);
      
      free($2);
   }

read_write_statement : read_statement  { /* does nothing */ }
                     | write_statement { /* does nothing */ }
;

assign_statement : IDENTIFIER LSQUARE exp RSQUARE ASSIGN exp
            {
               /* Notify to `program' that the value $6
                * have to be assigned to the location
                * addressed by $1[$3]. Where $1 is obviously
                * the array/pointer identifier, $3 is an expression
                * that holds an integer value. That value will be
                * used as an index for the array $1 */
               storeArrayElement(program, $1, $3, $6);

               /* free the memory associated with the IDENTIFIER.
                * The use of the free instruction is required
                * because of the value associated with IDENTIFIER.
                * The value of IDENTIFIER is a string created
                * by a call to the function `strdup' (see Acse.lex) */
               free($1);
            }
            | IDENTIFIER ASSIGN exp
            {
               int location;

               /* in order to assign a value to a variable, we have to
                * know where the variable is located (i.e. in which register).
                * the function `get_symbol_location' is used in order
                * to retrieve the register location assigned to
                * a given identifier.
                * A symbol table keeps track of the location of every
                * declared variable.
                * `get_symbol_location' perform a query on the symbol table
                * in order to discover the correct location of
                * the variable with $1 as identifier */
               
               /* get the location of the symbol with the given ID. */
               location = get_symbol_location(program, $1, 0);

               /* update the value of location */
               if ($3.expression_type == IMMEDIATE)
                  gen_move_immediate(program, location, $3.value);
               else
                  gen_add_instruction(program,
                                      location,
                                      REG_0,
                                      $3.value,
                                      CG_DIRECT_ALL);

               /* free the memory associated with the IDENTIFIER */
               free($1);
            }
            | IDENTIFIER ASSIGN IDENTIFIER LSQUARE NUMBER SLICE NUMBER RSQUARE { // SLICE operator
            /*    $1       $2       $3       $4      $5    $6     $7     $8    */
               /* Check if IDENTIFIERS are identifiers of arrays */
               t_axe_variable *v_destArray = getVariable(program, $1);
               t_axe_variable *v_srcArray = getVariable(program, $3);

               if (!v_destArray->isArray || !v_srcArray->isArray)
                  yyerror("Ouch");
               
               /* We can do this since NUMBER are constants */
               if ($5 < 0 || $7 < 0)
                  yyerror("Cripes!");

               /* Allocate an array of registers */
               /* How many? at maximum we need the size of the array itself */
               /* 'calloc' fills with zeros the allocated area */
               int *r_tmpRegs = calloc(sizeof(int), v_destArray->arraySize);
               int i = 0, j = $5;

               /* Each register correspond to a value  */
               do {
                  r_tmpRegs[i] = loadArrayElement(program, $3, 
                                                  create_expression(j, IMMEDIATE));
                  i++;

                  if (j == $7)
                     break;

                  /* When the end of the array is reached, reset the index */
                  j = (j+1) % v_srcArray->arraySize;
               } while (i < v_destArray->arraySize);  // Fill the src array

               for (i = 0; i < v_destArray->arraySize; i++) {
                  /*
                     With the 'calloc' we allocated a space of memory
                     full of zeros. Thus, we check if there has not been
                     any update.
                  */
                  if (r_tmpRegs[i] == 0)
                     break;
                  storeArrayElement(program, $1, create_expression(i, IMMEDIATE), 
                                    create_expression(r_tmpRegs[i], REGISTER));
               }

               free(r_tmpRegs);
               free($1);
               free($3);
            }
            | IDENTIFIER ASSIGN VCMP LPAR IDENTIFIER COMMA IDENTIFIER RPAR {  // VCMP operator
            /*    $1       $2    $3   $4     $5       $6       $7      $8  */
               t_axe_variable *src1 = getVariable(program, $5);
               t_axe_variable *src2 = getVariable(program, $7);
               t_axe_variable *dest = getVariable(program, $1);

               if (!src1->isArray || !src2->isArray || !dest->isArray)
                  yyerror("Please, input must be arrays.");

               if (src1->arraySize != src2->arraySize || src1->arraySize != dest->arraySize)
                  yyerror("Please, arrays must be of the same size.");

               /* We could also implement it with Loop Unrolling, but for
                  inefficiency we do not do that. Rather, we use Assembly rationale.
                  Use Loop Unrolling ONLY FOR SMALL ITERATIONS!
                */

               int r_i = gen_load_immediate(program, 0);
               t_axe_label *next = assignNewLabel(program);

               handle_binary_comparison(program, 
                                        create_expression(r_i, REGISTER),
                                        create_expression(dest->arraySize, IMMEDIATE),
                                        _LT_);

               t_axe_label *exit = newLabel(program);
               gen_beq_instruction(program, exit, 0);

               /* Loop Body */
               int r_v1 = loadArrayElement(program, $5, create_expression(r_i, REGISTER));
               int r_v2 = loadArrayElement(program, $7, create_expression(r_i, REGISTER));
               t_axe_expression dest_val = 
                        handle_bin_numeric_op(program,
                                 handle_binary_comparison(
                                       program, 
                                       create_expression(r_v1, REGISTER),
                                       create_expression(r_v2, REGISTER),
                                       _GT_),
                                 handle_bin_numeric_op(program,
                                       handle_binary_comparison(
                                          program, 
                                          create_expression(r_v1, REGISTER),
                                          create_expression(r_v2, REGISTER),
                                          _LT_),
                                       create_expression(-1, IMMEDIATE), 
                                       MUL),
                                 ADD      
                        );
               
               storeArrayElement(program, $1, create_expression(r_i, REGISTER), dest_val);

               gen_addi_instruction(program, r_i, r_i, 1);
               gen_bt_instruction(program, next, 0);

               assignLabel(program, exit);
            }
            |  IDENTIFIER ASSIGN LSQUARE exp INTERVAL exp RSQUARE
            /*   $1        $2     $3     $4    $5     $6    $7   */
               {
                  /*
                     $1: variable to assign the result
                     $4: lower-bound
                     $6: upper-bound
                  */
                 t_axe_variable *v_dest = getVariable(program, $1);
                 int r_dest = get_symbol_location(program, $1, 0);

                  if (v_dest == NULL)
                     yyerror("Variable does not exists!");
                  
                  if (v_dest->isArray) { /* Array case */
                     int r_i = getNewRegister(program);
                     int r_n = getNewRegister(program);

                     gen_addi_instruction(program, r_i, REG_0, 0);
                     if ($4.expression_type == REGISTER) {
                        gen_add_instruction(program, r_n, REG_0, $4.value, CG_DIRECT_ALL);
                     } else {
                        gen_addi_instruction(program, r_n, REG_0, $4.value);
                     }
                     t_axe_label *l_loop = assignNewLabel(program);
                     gen_sub_instruction(program, REG_0, r_i, v_dest->arraySize, CG_DIRECT_ALL);
                     t_axe_label *l_exit = newLabel(program);
                     gen_bge_instruction(program, l_exit, 0);

                     if ($6.expression_type == REGISTER) {
                        gen_sub_instruction(program, REG_0, r_n, $6.value, CG_DIRECT_ALL);
                     } else {
                        gen_subi_instruction(program, REG_0, r_n, $6.value);
                     }
                     gen_beq_instruction(program, l_exit, 0);

                     storeArrayElement(program, 
                        $1, 
                        create_expression(r_i, REGISTER), 
                        create_expression(r_n, REGISTER)
                     );
                     gen_addi_instruction(program, r_i, r_i, 1);
                     gen_addi_instruction(program, r_n, r_n, 1);
                     gen_bt_instruction(program, l_loop, 0);

                     assignLabel(program, l_exit);

                  } else { /* Scalar case */
                  /*
                     All the following code can be avoided by using
                     handle binary comparison 
                     // $6 > $4 case
                     if ($4.expression_type == IMMEDIATE) { // $4 is a constant
                        if ($6.expression_type == IMMEDIATE) { // $6 is a constant
                           if ($4.value != $6.value) {
                              gen_addi_instruction(program, r_dest, REG_0, $4.value);
                           }
                        }
                     } else {
                        // handle register operator => generate code
                        int r_exp1, r_exp2;
                        if ($4.expression_type == IMMEDIATE) {
                           r_exp1 = gen_load_immediate(program, $4.value);
                        } else {
                           r_exp1 = $4.value;
                        }
                        if ($6.expression_type == IMMEDIATE) {
                           r_exp2 = gen_load_immediate(program, $6.value);
                        } else {
                           r_exp2 = $6.value;
                        }
                        gen_sub_instruction(program, REG_0, r_exp1, r_exp2, CG_DIRECT_ALL);
                        t_axe_label *l_skip = newLabel(program);
                        gen_beq_instruction(program, l_skip, 0);
                        gen_add_instruction(program, r_dest, REG_0, r_exp1, CG_DIRECT_ALL);
                        assignLabel(prgoram, l_skip); */
                        int r_exp1, r_exp2;
                        t_axe_expression e_check =
                           handle_binary_comparison(program, $4, $6, _EQ_);
                        if (e_check.expression_type == IMMEDIATE) {
                           // e_check.value == ($4.value == $6.value)
                           if (e_check.value == 0) {
                              gen_addi_instruction(program, r_dest, REG_0, $4.value);
                           }
                        } else {
                           t_axe_label *l_skip = newLabel(program);
                           if ($4.expression_type == IMMEDIATE) {
                              r_exp1 = gen_load_immediate(program, $4.value);
                           } else {
                              r_exp1 = $4.value;
                           }
                           gen_bne_instruction(program, l_skip, 0);
                           gen_add_instruction(program, r_dest, REG_0, r_exp1, CG_DIRECT_ALL);
                           assignLabel(program, l_skip);
                        }
                     }
                     
                     free($1); 
               }   
;
            
if_statement   : if_stmt
               {
                  /* fix the `label_else' */
                  assignLabel(program, $1);
               }
               | if_stmt ELSE
               {
                  /* reserve a new label that points to the address where to
                   * jump if `exp' is verified */
                  $2 = newLabel(program);
   
                  /* exit from the if-else */
                  gen_bt_instruction (program, $2, 0);
   
                  /* fix the `label_else' */
                  assignLabel(program, $1);
               }
               code_block
               {
                  /* fix the `label_else' */
                  assignLabel(program, $2);
               }
;
            
if_stmt  :  IF
               {
                  /* the label that points to the address where to jump if
                   * `exp' is not verified */
                  $1 = newLabel(program);
               }
               LPAR exp RPAR
               {
                     if ($4.expression_type == IMMEDIATE)
                         gen_load_immediate(program, $4.value);
                     else
                         gen_andb_instruction(program, $4.value,
                             $4.value, $4.value, CG_DIRECT_ALL);

                     /* if `exp' returns FALSE, jump to the label $1 */
                     gen_beq_instruction (program, $1, 0);
               }
               code_block { $$ = $1; }
;

while_statement  : WHILE
                  {
                     /* initialize the value of the non-terminal */
                     $1 = create_while_statement();

                     /* reserve and fix a new label */
                     $1.label_condition
                           = assignNewLabel(program);
                  }
                  LPAR exp RPAR
                  {
                     if ($4.expression_type == IMMEDIATE)
                        gen_load_immediate(program, $4.value);
                     else
                         gen_andb_instruction(program, $4.value,
                             $4.value, $4.value, CG_DIRECT_ALL);

                     /* reserve a new label. This new label will point
                      * to the first instruction after the while code
                      * block */
                     $1.label_end = newLabel(program);
                     
                     t_break_stmt *curBreak = malloc(sizeof(t_break_stmt));
                     curBreak->l_exit = $1.label_end;
                     breakStack = addFirst(breakStack, curBreak);

                     /* if `exp' returns FALSE, jump to the label 
                      * $1.label_end */
                     gen_beq_instruction (program, $1.label_end, 0);
                  }
                  code_block
                  {
                     /* jump to the beginning of the loop */
                     gen_bt_instruction
                           (program, $1.label_condition, 0);

                     /* fix the label `label_end' */
                     assignLabel(program, $1.label_end);

                     t_break_stmt *curBreak = (t_break_stmt *)LDATA(breakStack);
                     free(curBreak);
                     breakStack = removeFirst(breakStack);
                  }
;
                  
do_while_statement  : DO
                     {
                        /* the label that points to the address where to jump if
                         * `exp' is not verified */
                        $1 = newLabel(program);
                        
                        /* fix the label */
                        assignLabel(program, $1);

                        t_break_stmt *curBreak = malloc(sizeof(t_break_stmt));
                        curBreak->l_exit = newLabel(program);
                        breakStack = addFirst(breakStack, curBreak);
                     }
                     code_block WHILE LPAR exp RPAR
                     {
                           if ($6.expression_type == IMMEDIATE)
                               gen_load_immediate(program, $6.value);
                           else
                               gen_andb_instruction(program, $6.value,
                                   $6.value, $6.value, CG_DIRECT_ALL);

                           /* if `exp' returns TRUE, jump to the label $1 */
                           gen_bne_instruction (program, $1, 0);

                           t_break_stmt *curBreak = (t_break_stmt *)LDATA(breakStack);
                           assignLabel(program, curBreak->l_exit);
                           free(curBreak);
                           breakStack = removeFirst(breakStack);
                     }
;

return_statement : RETURN
            {
               /* insert an HALT instruction */
               gen_halt_instruction(program);
            }
;

read_statement : READ LPAR IDENTIFIER RPAR 
            {
               int location;
               
               /* read from standard input an integer value and assign
                * it to a variable associated with the given identifier */
               /* get the location of the symbol with the given ID */
               
               /* lookup the symbol table and fetch the register location
                * associated with the IDENTIFIER $3. */
               location = get_symbol_location(program, $3, 0);

               /* insert a read instruction */
               gen_read_instruction (program, location);

               /* free the memory associated with the IDENTIFIER */
               free($3);
            }
;
            
write_statement : WRITE LPAR exp RPAR 
            {
               int location;

               if ($3.expression_type == IMMEDIATE)
               {
                  /* load `immediate' into a new register. Returns the new
                   * register identifier or REG_INVALID if an error occurs */
                  location = gen_load_immediate(program, $3.value);
               }
               else
                  location = $3.value;

               /* write to standard output an integer value */
               gen_write_instruction (program, location);
            }
;

exp: NUMBER      { $$ = create_expression ($1, IMMEDIATE); }
   | IDENTIFIER  {
                     int location;
   
                     /* get the location of the symbol with the given ID */
                     location = get_symbol_location(program, $1, 0);
                     
                     /* return the register location of IDENTIFIER as
                      * a value for `exp' */
                     $$ = create_expression (location, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free($1);
   }
   | IDENTIFIER LSQUARE exp RSQUARE {
                     int reg;
                     
                     /* load the value IDENTIFIER[exp]
                      * into `arrayElement' */
                     reg = loadArrayElement(program, $1, $3);

                     /* create a new expression */
                     $$ = create_expression (reg, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free($1);
   }
   | NOT_OP exp {
               if ($2.expression_type == IMMEDIATE)
               {
                  /* IMMEDIATE (constant) expression: compute the value at
                   * compile-time and place the result in a new IMMEDIATE
                   * expression */
                  $$ = create_expression(!($2.value), IMMEDIATE);
               }
               else
               {
                  /* REGISTER expression: generate the code that will compute
                   * the result at compile time */

                  /* Reserve a new register for the result */
                  int output_register = getNewRegister(program);

                  /* Generate a NOTL instruction which will store the negated
                   * logic value into the register we reserved */
                  gen_notl_instruction(program, output_register, $2.value);
                  
                  /* Return a REGISTER expression with the result register */
                  $$ = create_expression(output_register, REGISTER);
               }
   }
   | exp AND_OP exp { $$ = handle_bin_numeric_op(program, $1, $3, ANDB); }
   | exp OR_OP exp  { $$ = handle_bin_numeric_op(program, $1, $3, ORB); }
   | exp PLUS exp   { $$ = handle_bin_numeric_op(program, $1, $3, ADD); }
   | exp MINUS exp  { $$ = handle_bin_numeric_op(program, $1, $3, SUB); }
   | exp MUL_OP exp { $$ = handle_bin_numeric_op(program, $1, $3, MUL); }
   | exp DIV_OP exp { $$ = handle_bin_numeric_op(program, $1, $3, DIV); }
   | exp LT exp     { $$ = handle_binary_comparison(program, $1, $3, _LT_); }
   | exp GT exp     { $$ = handle_binary_comparison(program, $1, $3, _GT_); }
   | exp EQ exp     { $$ = handle_binary_comparison(program, $1, $3, _EQ_); }
   | exp NOTEQ exp  { $$ = handle_binary_comparison(program, $1, $3, _NOTEQ_); }
   | exp LTEQ exp   { $$ = handle_binary_comparison(program, $1, $3, _LTEQ_); }
   | exp GTEQ exp   { $$ = handle_binary_comparison(program, $1, $3, _GTEQ_); }
   | exp SHL_OP exp { $$ = handle_bin_numeric_op(program, $1, $3, SHL); }
   | exp SHR_OP exp { $$ = handle_bin_numeric_op(program, $1, $3, SHR); }
   | exp ANDAND exp { $$ = handle_bin_numeric_op(program, $1, $3, ANDL); }
   | exp OROR exp   { $$ = handle_bin_numeric_op(program, $1, $3, ORL); }
   | LPAR exp RPAR  { $$ = $2; }
   | MINUS exp {
                  if ($2.expression_type == IMMEDIATE)
                  {
                     $$ = $2;
                     $$.value = - ($$.value);
                  }
                  else
                  {
                     t_axe_expression exp_r0;

                     /* create an expression for register REG_0 */
                     exp_r0.value = REG_0;
                     exp_r0.expression_type = REGISTER;
                     
                     $$ = handle_bin_numeric_op
                           (program, exp_r0, $2, SUB);
                  }
               }
   | BRANGE LPAR exp COMMA exp COMMA exp RPAR {
   /*  $1    $2   $3   $4  $5   $6   $7   $8 */
      t_axe_expression op = $3; 
      t_axe_expression lo = $5;
      t_axe_expression hi = $7;

      t_axe_expression lo_gt_hi = 
            handle_binary_comparison(program, lo, hi, _GT_);

      t_axe_expression lo_lt_zero = 
            handle_binary_comparison(program, lo, 
                                       create_expression(0, IMMEDIATE), _LT_);

      t_axe_expression hi_gt_31 = 
            handle_binary_comparison(program, hi, 
                                       create_expression(31, IMMEDIATE), _GT_);
      
      t_axe_expression error_cond = 
            handle_bin_numeric_op(program, lo_gt_hi, lo_lt_zero, ORL);
      error_cond = 
            handle_bin_numeric_op(program, error_cond, hi_gt_31, ORL);

      t_axe_label *skipComputationDyn = NULL;
      int skipComputationStatically = 0;
      if (error_cond.expression_type == IMMEDIATE) {
         if (error_cond.value != 0) {
            $$ = create_expression(0, IMMEDIATE);
            skipComputationStatically = 1;
         } else {
            /* Error condition is always TRUE */
         }
      } else {
         skipComputationDyn = newLabel(program);
         gen_bne_instruction(program, skipComputationDyn, 0);
      }

      if (!skipComputationStatically) {
         t_axe_expression mask =
               handle_bin_numeric_op(program,
                  handle_bin_numeric_op(program, hi, lo, SUB),
                  create_expression(1, IMMEDIATE),
                  ADD);
         mask = handle_bin_numeric_op(program,
                  create_expression(1, IMMEDIATE), mask, SHL);
         mask = handle_bin_numeric_op(program,
                  mask, create_expression(1, IMMEDIATE), SUB);
         t_axe_expression tomask =
               handle_bin_numeric_op(program, op, lo, SHR);
         t_axe_expression res =
               handle_bin_numeric_op(program,
                  tomask, mask, ANDB);

         if (error_cond.expression_type == IMMEDIATE) {
            if (res.expression_type == IMMEDIATE) {
               $$ = res;
            } else {
               $$ = res;
            }
         } else {
            $$ = create_expression(getNewRegister(program), REGISTER);
            t_axe_label *label_exit = newLabel(program);
            
            if (res.expression_type == IMMEDIATE) {
               gen_move_immediate(program, $$.value, res.value);
            } else {
               gen_add_instruction(program, $$.value, 
                                    REG_0, res.value, CG_DIRECT_ALL);
            }

            if (!skipComputationDyn) {
               gen_bt_instruction(program, label_exit, 0);
               assignLabel(program, skipComputationDyn);
               gen_move_immediate(program, $$.value, 0);
            }
            assignLabel(program, label_exit);
         }
      }
   }
   | INVARIANT LPAR IDENTIFIER COMMA 
   /*   $1      $2      $3      $4   */
   { /* $5 */
      $1.begin_code = newLabel(program);
      gen_bt_instruction(program, $1.begin_code, 0);

      $1.eval_exp = assignNewLabel(program);
   } exp COMMA IDENTIFIER RPAR {
   /* $6   $7      $8       $9   */
      $1.end_eval_exp = newLabel(program);
      gen_bt_instruction(program, $1.end_eval_exp, 0);

      assignLabel(program, $1.begin_code);

      t_axe_variable *v_array = getVariable(program, $3);

      if (!v_array->isArray)
         yyerror("1st arg is not an array!");

      if ($6.expression_type == IMMEDIATE) {
         $$ = create_expression($6.value ? 1 : 0, IMMEDIATE);
      } else { /* REGISTER */
         int r_res = gen_load_immediate(program, 1);
         $$ = create_expression(r_res, REGISTER);
         int r_loopc = gen_load_immediate(program, 0);

         t_axe_label *label_loop = assignNewLabel(program);

         handle_binary_comparison(program, 
               create_expression(r_loopc, REGISTER), 
               create_expression(v_array->arraySize, 
               IMMEDIATE),
               _LT_);
         
         t_axe_label *label_exit = newLabel(program);
         gen_beq_instruction(program, label_exit, 0);

         /* Generate the code for the loop body */
         int r_var = get_symbol_location(program, $8, 0);
         int r_temp = loadArrayElement(program, 
                           $3, create_expression(r_loopc, REGISTER));
         gen_add_instruction(program, r_var, REG_0, r_temp, CG_DIRECT_ALL);

         gen_bt_instruction(program, $1.eval_exp, 0);
         assignLabel(program, $1.end_eval_exp);
         gen_andb_instruction(program, $6.value, $6.value, $6.value, CG_DIRECT_ALL);
         t_axe_label *skip_failure = newLabel(program);
         gen_bne_instruction(program, skip_failure, 0);

         gen_add_instruction(program, r_res, REG_0, REG_0, CG_DIRECT_ALL);
         gen_bt_instruction(program, label_exit, 0);

         assignLabel(program, skip_failure);
         gen_addi_instruction(program, r_loopc, r_loopc, 1);
         gen_bt_instruction(program, label_loop, 0);

         assignLabel(program, label_exit);
      }
      free($3);
      free($8);
   }
   | exp DOLLAR exp AT NUMBER {
   /* $1   $2   $3  $4  $5    */
      if ($5 > 32)
         $5 = 32;

      int mask_b = (1 << (32 - $5)) - 1;
      int mask_a = ~mask_b;

      $$ =  handle_bin_numeric_op(program,
               handle_bin_numeric_op(program,
                     $1,
                     create_expression(mask_a, IMMEDIATE),
                     ANDB),
               handle_bin_numeric_op(program,
                     $3,
                     create_expression(mask_b, IMMEDIATE),
                     ANDB),
            ORB);

   }
   | SUM WEIGHTED BY IDENTIFIER LSQUARE exp_list RSQUARE {
   /* $1    $2    $3    $4        $5      $6       $7    */
      t_axe_variable *arr = getVariable(program, $4);
      
      if (!arr->isArray)
         yyerror("Please, input must be an array.");

      t_axe_expression sum = create_expression(0, IMMEDIATE);

      t_list *cur = $6;
      for (int i = 0; i < arr->arraySize; i++) {
         if (cur == NULL)
            yyerror("Expression list too short!");
         t_axe_expression *cur_exp = (t_axe_expression *)LDATA(cur);
         int r_val = loadArrayElement(program, $4, 
                           create_expression(i, IMMEDIATE));
         sum = handle_bin_numeric_op(program,
                     sum,
                     handle_bin_numeric_op(program,
                     *cur_exp,
                     create_expression(r_val, REGISTER),
                     MUL),
                  ADD);

         free(cur_exp);
         cur = LNEXT(cur);
      }
      if (cur != NULL)
         yyerror("Exp list too long!");

      $$ = sum;
      freeList($6);
   }
   | exp DOT LMSPLICE range_list RMSPLICE {
      $$ = handle_bin_numeric_op(program,
               $1,
               create_expression($4, IMMEDIATE),
               ANDB);
   }
;

range_list :
      range_list COMMA range {
         if (($1 & $3) != 0) {
            yyerror("Ranges overlap!");
         }

         $$ = $1 | $3;
      }
   |  range {
         $$ = $1;
      }
;

range : 
      NUMBER MINUS NUMBER
   /*   $1    $2     $3   */
      {
         if ($1 > $3 || $1 < 0 || $1 > 31 || $3 < 0 || $3 > 31) {
            yyerror("Range boundaries not ordered.");
         }

         int min = $1, max = $3;
         $$ = ((1 << (max - min + 1)) - 1) << min;
      }
;

exp_list : exp_list COMMA exp {
         /*   $1     $2    $3    */
            t_axe_expression *our_exp = malloc(sizeof(t_axe_expression));
            *our_exp = $3; // copy the value $3 in the allocated area
            /*
               the previous assignment is equivalent to
               our_exp->value = $3.value
               our_exp->type = $3.type
            */

            $$ = addElement($1, (void *)our_exp, -1);
         }
         | exp {
         /* $1 */
            /* $1 is not a pointer (is a value allocated on the stack)
               ===> The element of a list, however, must be a pointer!!
               Thus, we need to do this trick:
             */
            t_axe_expression *our_exp = malloc(sizeof(t_axe_expression));
            *our_exp = $1; // copy the value $1 in the allocated area

            /* NULL because the list is empty */
            $$ = addElement(NULL, (void *)our_exp, -1);
         }
;

%%
/*=========================================================================
                                  MAIN
=========================================================================*/
int main (int argc, char **argv)
{
   /* initialize all the compiler data structures and global variables */
   init_compiler(argc, argv);
   
   /* start the parsing procedure */
   yyparse();
   
#ifndef NDEBUG
   fprintf(stdout, "Parsing process completed. \n");
   printProgramInfos(program, file_infos->frontend_output);
#endif

   /* test if the parsing process completed succesfully */
   checkConsistency();

   /* do not attach a line number to the instructions generated by the
    * transformations that follow. */
   line_num = -1;

   doTargetSpecificTransformations(program);
   
#ifndef NDEBUG
   fprintf(stdout, "Creating a control flow graph. \n");
#endif

   /* create the control flow graph */
   graph = createFlowGraph(program->instructions);
   checkConsistency();

#ifndef NDEBUG
   assert(program != NULL);
   assert(program->sy_table != NULL);
   assert(file_infos != NULL);
   assert(file_infos->syTable_output != NULL);
   printSymbolTable(program->sy_table, file_infos->syTable_output);
   printGraphInfos(graph, file_infos->cfg_1, 0);
      
   fprintf(stdout, "Updating the basic blocks. \n");
#endif
      
   /* update the control flow graph by inserting load and stores inside
   * every basic block */
   graph = insertLoadAndStoreInstr(program, graph);

#ifndef NDEBUG
   fprintf(stdout, "Executing a liveness analysis on the intermediate code \n");
#endif
   performLivenessAnalysis(graph);
   checkConsistency();

#ifndef NDEBUG
   printGraphInfos(graph, file_infos->cfg_2, 1);
#endif
      
#ifndef NDEBUG
   fprintf(stdout, "Starting the register allocation process. \n");
#endif
   /* initialize the register allocator by using the control flow
    * informations stored into the control flow graph */
   RA = initializeRegAlloc(graph);
      
   /* execute the linear scan algorithm */
   execute_linear_scan(RA);
      
#ifndef NDEBUG
   printRegAllocInfos(RA, file_infos->reg_alloc_output);
#endif

#ifndef NDEBUG
   fprintf(stdout, "Updating the control flow informations. \n");
#endif
   /* apply changes to the program informations by using the informations
   * of the register allocation process */
   materializeRegisterAllocation(program, graph, RA);
   updateProgramInfos(program, graph);

#ifndef NDEBUG
   fprintf(stdout, "Writing the assembly file... \n");
#endif
   writeAssembly(program, file_infos->output_file_name);
      
#ifndef NDEBUG
   fprintf(stdout, "Assembly written on file \"%s\".\n", file_infos->output_file_name);
#endif
   
   /* shutdown the compiler */
   shutdownCompiler(0);

   return 0;
}

/*=========================================================================
                                 YYERROR
=========================================================================*/
void yyerror(const char* msg)
{
   errorcode = AXE_SYNTAX_ERROR;
   free((void *)errormsg);
   errormsg = strdup(msg);
}
