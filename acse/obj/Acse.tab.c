/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EOF_TOK = 258,
     LBRACE = 259,
     RBRACE = 260,
     LPAR = 261,
     RPAR = 262,
     LSQUARE = 263,
     RSQUARE = 264,
     SEMI = 265,
     PLUS = 266,
     MINUS = 267,
     MUL_OP = 268,
     DIV_OP = 269,
     AND_OP = 270,
     OR_OP = 271,
     NOT_OP = 272,
     ASSIGN = 273,
     LT = 274,
     GT = 275,
     SHL_OP = 276,
     SHR_OP = 277,
     EQ = 278,
     NOTEQ = 279,
     LTEQ = 280,
     GTEQ = 281,
     ANDAND = 282,
     OROR = 283,
     COMMA = 284,
     RETURN = 285,
     READ = 286,
     WRITE = 287,
     ITERATE = 288,
     TIMES = 289,
     UNLESS = 290,
     BRANGE = 291,
     SLICE = 292,
     VCMP = 293,
     COUNT = 294,
     WHEN = 295,
     INTO = 296,
     DOLLAR = 297,
     AT = 298,
     SUM = 299,
     WEIGHTED = 300,
     BY = 301,
     RMSPLICE = 302,
     LMSPLICE = 303,
     DOT = 304,
     VEC_XOR = 305,
     INTERVAL = 306,
     BREAK = 307,
     EXEC = 308,
     CONVERGE = 309,
     LOOP_DECREASING = 310,
     INVARIANT = 311,
     DO = 312,
     WHILE = 313,
     IF = 314,
     ELSE = 315,
     TYPE = 316,
     IDENTIFIER = 317,
     NUMBER = 318
   };
#endif
/* Tokens.  */
#define EOF_TOK 258
#define LBRACE 259
#define RBRACE 260
#define LPAR 261
#define RPAR 262
#define LSQUARE 263
#define RSQUARE 264
#define SEMI 265
#define PLUS 266
#define MINUS 267
#define MUL_OP 268
#define DIV_OP 269
#define AND_OP 270
#define OR_OP 271
#define NOT_OP 272
#define ASSIGN 273
#define LT 274
#define GT 275
#define SHL_OP 276
#define SHR_OP 277
#define EQ 278
#define NOTEQ 279
#define LTEQ 280
#define GTEQ 281
#define ANDAND 282
#define OROR 283
#define COMMA 284
#define RETURN 285
#define READ 286
#define WRITE 287
#define ITERATE 288
#define TIMES 289
#define UNLESS 290
#define BRANGE 291
#define SLICE 292
#define VCMP 293
#define COUNT 294
#define WHEN 295
#define INTO 296
#define DOLLAR 297
#define AT 298
#define SUM 299
#define WEIGHTED 300
#define BY 301
#define RMSPLICE 302
#define LMSPLICE 303
#define DOT 304
#define VEC_XOR 305
#define INTERVAL 306
#define BREAK 307
#define EXEC 308
#define CONVERGE 309
#define LOOP_DECREASING 310
#define INVARIANT 311
#define DO 312
#define WHILE 313
#define IF 314
#define ELSE 315
#define TYPE 316
#define IDENTIFIER 317
#define NUMBER 318




/* Copy the first part of user declarations.  */
#line 1 "Acse.y"

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
t_list *returnStack = NULL;

extern int yylex(void);
extern void yyerror(const char*);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 106 "Acse.y"
{            
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
/* Line 193 of yacc.c.  */
#line 337 "obj/Acse.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 350 "obj/Acse.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1088

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNRULES -- Number of states.  */
#define YYNSTATES  252

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    15,    19,    21,    25,
      30,    32,    34,    38,    41,    43,    46,    48,    51,    54,
      57,    60,    63,    65,    74,    75,    76,    88,    95,    99,
     101,   102,   109,   110,   111,   112,   126,   128,   130,   133,
     136,   138,   141,   143,   144,   149,   151,   153,   160,   164,
     173,   182,   190,   192,   193,   198,   199,   200,   208,   209,
     210,   218,   219,   227,   229,   232,   237,   242,   244,   246,
     251,   254,   258,   262,   266,   270,   274,   278,   282,   286,
     290,   294,   298,   302,   306,   310,   314,   318,   322,   325,
     334,   335,   345,   351,   359,   365,   366,   372,   376,   378,
     382,   386
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    71,     3,    -1,    66,    67,    -1,
      -1,    61,    68,    10,    -1,    68,    29,    69,    -1,    69,
      -1,    62,    18,    63,    -1,    62,     8,    63,     9,    -1,
      62,    -1,    72,    -1,     4,    71,     5,    -1,    71,    72,
      -1,    72,    -1,    90,    10,    -1,    85,    -1,    89,    10,
      -1,    81,    10,    -1,    74,    10,    -1,    77,    10,    -1,
      73,    10,    -1,    10,    -1,    50,     6,    62,    29,    62,
      29,    62,     7,    -1,    -1,    -1,    55,    62,    46,    75,
     104,    76,    70,    58,     6,   104,     7,    -1,    39,     4,
      78,     5,    41,    62,    -1,    78,    29,    79,    -1,    79,
      -1,    -1,    40,     6,   104,     7,    80,    70,    -1,    -1,
      -1,    -1,    33,    82,    70,    83,    34,     6,   104,     7,
      84,    35,     6,   104,     7,    -1,    91,    -1,    96,    -1,
      99,    10,    -1,   101,    10,    -1,    87,    -1,    86,    10,
      -1,    52,    -1,    -1,    54,    62,    88,    70,    -1,   102,
      -1,   103,    -1,    62,     8,   104,     9,    18,   104,    -1,
      62,    18,   104,    -1,    62,    18,    62,     8,    63,    37,
      63,     9,    -1,    62,    18,    38,     6,    62,    29,    62,
       7,    -1,    62,    18,     8,   104,    51,   104,     9,    -1,
      93,    -1,    -1,    93,    60,    92,    70,    -1,    -1,    -1,
      59,    94,     6,   104,     7,    95,    70,    -1,    -1,    -1,
      58,    97,     6,   104,     7,    98,    70,    -1,    -1,    57,
     100,    70,    58,     6,   104,     7,    -1,    30,    -1,    30,
     104,    -1,    31,     6,    62,     7,    -1,    32,     6,   104,
       7,    -1,    63,    -1,    62,    -1,    62,     8,   104,     9,
      -1,    17,   104,    -1,   104,    15,   104,    -1,   104,    16,
     104,    -1,   104,    11,   104,    -1,   104,    12,   104,    -1,
     104,    13,   104,    -1,   104,    14,   104,    -1,   104,    19,
     104,    -1,   104,    20,   104,    -1,   104,    23,   104,    -1,
     104,    24,   104,    -1,   104,    25,   104,    -1,   104,    26,
     104,    -1,   104,    21,   104,    -1,   104,    22,   104,    -1,
     104,    27,   104,    -1,   104,    28,   104,    -1,     6,   104,
       7,    -1,    12,   104,    -1,    36,     6,   104,    29,   104,
      29,   104,     7,    -1,    -1,    56,     6,    62,    29,   105,
     104,    29,    62,     7,    -1,   104,    42,   104,    43,    63,
      -1,    44,    45,    46,    62,     8,   109,     9,    -1,   104,
      49,    48,   107,    47,    -1,    -1,    53,     6,   106,    70,
       7,    -1,   107,    29,   108,    -1,   108,    -1,    63,    12,
      63,    -1,   109,    29,   104,    -1,   104,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   204,   204,   217,   218,   221,   228,   232,   239,   248,
     257,   270,   271,   275,   276,   281,   282,   283,   284,   285,
     286,   287,   288,   292,   348,   355,   346,   379,   391,   397,
     406,   404,   438,   446,   452,   438,   488,   489,   490,   491,
     492,   493,   497,   507,   505,   529,   530,   533,   550,   581,
     629,   685,   786,   792,   791,   811,   817,   810,   831,   840,
     830,   876,   875,   906,   911,   929,   949,   967,   968,   981,
     994,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1053,
    1133,  1131,  1192,  1212,  1245,  1251,  1251,  1266,  1273,  1279,
    1291,  1303
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOF_TOK", "LBRACE", "RBRACE", "LPAR",
  "RPAR", "LSQUARE", "RSQUARE", "SEMI", "PLUS", "MINUS", "MUL_OP",
  "DIV_OP", "AND_OP", "OR_OP", "NOT_OP", "ASSIGN", "LT", "GT", "SHL_OP",
  "SHR_OP", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR", "COMMA",
  "RETURN", "READ", "WRITE", "ITERATE", "TIMES", "UNLESS", "BRANGE",
  "SLICE", "VCMP", "COUNT", "WHEN", "INTO", "DOLLAR", "AT", "SUM",
  "WEIGHTED", "BY", "RMSPLICE", "LMSPLICE", "DOT", "VEC_XOR", "INTERVAL",
  "BREAK", "EXEC", "CONVERGE", "LOOP_DECREASING", "INVARIANT", "DO",
  "WHILE", "IF", "ELSE", "TYPE", "IDENTIFIER", "NUMBER", "$accept",
  "program", "var_declarations", "var_declaration", "declaration_list",
  "declaration", "code_block", "statements", "statement",
  "vec_xor_statement", "loop_decreasing_statement", "@1", "@2",
  "count_when_into_statement", "when_list", "when_block", "@3",
  "iterate_statement", "@4", "@5", "@6", "control_statement",
  "break_statement", "converge_statement", "@7", "read_write_statement",
  "assign_statement", "if_statement", "@8", "if_stmt", "@9", "@10",
  "while_statement", "@11", "@12", "do_while_statement", "@13",
  "return_statement", "read_statement", "write_statement", "exp", "@14",
  "@15", "range_list", "range", "exp_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    75,    76,    74,    77,    78,    78,
      80,    79,    82,    83,    84,    81,    85,    85,    85,    85,
      85,    85,    86,    88,    87,    89,    89,    90,    90,    90,
      90,    90,    91,    92,    91,    94,    95,    93,    97,    98,
      96,   100,    99,   101,   101,   102,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   104,   104,   104,   104,   106,   104,   107,   107,   108,
     109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     3,     3,     1,     3,     4,
       1,     1,     3,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     1,     8,     0,     0,    11,     6,     3,     1,
       0,     6,     0,     0,     0,    13,     1,     1,     2,     2,
       1,     2,     1,     0,     4,     1,     1,     6,     3,     8,
       8,     7,     1,     0,     4,     0,     0,     7,     0,     0,
       7,     0,     7,     1,     2,     4,     4,     1,     1,     4,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     8,
       0,     9,     5,     7,     5,     0,     5,     3,     1,     3,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    22,    63,     0,     0,    32,     0,
       0,    42,     0,     0,    61,    58,    55,     0,     0,     3,
       0,    14,     0,     0,     0,     0,    16,     0,    40,     0,
       0,    36,    52,    37,     0,     0,    45,    46,     0,     0,
       0,     0,     0,     0,     0,    68,    67,    64,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    10,     0,
       7,     0,     0,     2,    13,    21,    19,    20,    18,    41,
      17,    15,    53,    38,    39,     0,    88,    70,     0,     0,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    11,     0,     0,    29,     0,
       0,    24,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,    68,    48,     0,    87,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    71,    72,    77,    78,    83,
      84,    79,    80,    81,    82,    85,    86,     0,     0,    65,
      66,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     8,     6,     0,     0,     0,     0,    54,
       0,     0,     0,    90,    69,     0,     0,     0,    98,    12,
       0,     0,     0,    28,     0,    25,     0,    59,    56,     9,
       0,     0,     0,    67,     0,     0,    96,     0,    92,     0,
       0,    94,     0,    30,    27,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,   101,     0,     0,    99,    97,
       0,     0,     0,     0,    62,    60,    57,    51,     0,     0,
       0,    93,     0,     0,    34,    31,    23,     0,    50,    49,
      89,   100,     0,     0,     0,    91,     0,     0,     0,    26,
       0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    19,    59,    60,   104,    20,   105,    22,
      23,   158,   206,    24,   107,   108,   221,    25,    50,   152,
     243,    26,    27,    28,   110,    29,    30,    31,   124,    32,
      57,   209,    33,    56,   208,    34,    55,    35,    36,    37,
     130,   197,   128,   177,   178,   216
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     -53,    13,   215,   -53,   -53,     6,    19,    21,   -53,    20,
      22,   -53,   -48,   -16,   -53,   -53,   -53,   -14,     3,   -53,
      67,   -53,    39,    42,    43,    44,   -53,    45,   -53,    51,
      53,   -53,     4,   -53,    55,    56,   -53,   -53,     6,     6,
       6,    65,    29,    69,    89,    88,   -53,   893,    41,     6,
     141,    61,    48,   -53,    58,   141,   106,   107,    33,    10,
     -53,     6,    99,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   301,    -4,    -2,     6,    68,
     -53,    66,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
      70,   113,   333,   248,   -53,   -53,   117,    -3,   -53,    98,
     141,   -53,    72,     6,     6,    71,    73,   -53,   -14,   621,
       6,   125,   124,   893,   141,   -53,   758,    76,   141,   104,
     653,    -4,    -4,    -2,    -2,  1021,   989,    -6,    -6,    18,
      18,  1039,  1039,    -6,    -6,   957,   925,   790,    77,   -53,
     -53,   174,   105,     6,   100,    61,    80,   -53,     6,   138,
     365,   397,   137,   -53,   -53,   129,   685,    87,   158,   -53,
       6,   150,   152,   -53,   -53,    97,   151,   -25,   -53,   -53,
     160,   429,   114,   -53,   139,   893,     6,   -53,   -53,   -53,
       6,     6,   148,   130,   829,     6,   -53,     6,   -53,   115,
      77,   -53,     6,   -53,   -53,   120,   141,   461,   141,   141,
     893,   726,   121,   126,     6,   893,     8,   861,   -53,   -53,
     493,   141,   180,   143,   -53,   -53,   -53,   -53,   181,   199,
     525,   -53,     6,   153,   -53,   -53,   -53,   204,   -53,   -53,
     -53,   893,   205,   182,     6,   -53,   210,   557,     6,   -53,
     589,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,   -53,   -53,   101,   -52,   119,    -1,   -53,
     -53,   -53,   -53,   -53,   -53,    63,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      -5,   -53,   -53,   -53,    23,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      47,    21,   154,   112,   200,    83,    84,    85,    86,    85,
      86,    61,    38,     3,    53,    91,    92,   231,    39,    64,
     117,    62,   201,    40,    51,    48,   155,    49,    52,    83,
      84,    85,    86,    75,    76,    77,    99,   232,    99,   118,
      99,   115,    41,   100,   102,   100,    54,   100,    58,    65,
      42,   116,    66,    67,    68,    69,   119,   123,   157,    43,
      99,    70,    44,    71,    72,    73,    74,   100,    45,    46,
      63,    78,   169,   126,    79,    80,   172,     4,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    81,    82,     5,     6,     7,
       8,   106,    21,   101,   111,    38,     9,   120,   160,   161,
     109,    39,   113,   114,   127,   166,    40,    10,   148,    11,
     149,    12,    13,   153,    14,    15,    16,   156,   129,    18,
     159,   167,   168,   173,   162,    41,   163,   121,   171,   180,
     176,   182,   184,    42,   186,   103,   189,   190,   181,   192,
      64,     4,    43,   185,   223,    44,   225,   226,   195,   196,
     198,   122,    46,   199,    38,   194,   202,   213,   205,   235,
      39,     5,     6,     7,     8,    40,   204,   212,   218,   179,
       9,   207,   222,   228,     4,   210,   211,   236,   238,   229,
     215,    10,   217,    11,    41,    12,    13,   220,    14,    15,
      16,   237,    42,    18,     5,     6,     7,     8,   239,   230,
     244,    43,   245,     9,    44,   242,   248,   246,   183,   164,
      45,   193,   151,   219,    10,     4,    11,   241,    12,    13,
       0,    14,    15,    16,     0,     0,    18,     0,     0,   247,
       0,     0,     0,   250,     0,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,    10,     0,    11,     0,    12,
      13,     0,    14,    15,    16,     0,    17,    18,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
      11,     0,    12,    13,     0,    14,    15,    16,   125,     0,
      18,     0,    83,    84,    85,    86,    87,    88,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,     0,     0,    99,    83,    84,    85,    86,    87,    88,
     100,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,     0,    99,    83,    84,    85,    86,
      87,    88,   100,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,     0,     0,    99,    83,    84,
      85,    86,    87,    88,   100,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,     0,     0,    99,
      83,    84,    85,    86,    87,    88,   100,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
       0,    99,    83,    84,    85,    86,    87,    88,   100,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,    99,    83,    84,    85,    86,    87,    88,
     100,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,     0,     0,    99,    83,    84,    85,    86,
      87,    88,   100,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,     0,     0,    99,    83,    84,
      85,    86,    87,    88,   100,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   251,     0,     0,    99,
      83,    84,    85,    86,    87,    88,   100,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,    99,    83,    84,    85,    86,    87,    88,   100,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,    99,    83,    84,    85,    86,    87,    88,
     100,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,    83,    84,    85,    86,
      87,    88,   100,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
       0,     0,     0,     0,   100,   227,   191,    83,    84,    85,
      86,    87,    88,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,    83,
      84,    85,    86,    87,    88,   100,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,    83,    84,    85,    86,    87,    88,   100,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,   175,     0,     0,     0,     0,     0,   100,
      83,    84,    85,    86,    87,    88,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,    83,    84,    85,    86,    87,    88,   100,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,    83,    84,    85,    86,    87,    88,
     100,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,    83,    84,    85,    86,
      87,    88,   100,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,    83,    84,
      85,    86,    87,    88,   100,     0,    89,    90,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
      83,    84,    85,    86,    87,     0,   100,     0,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,    83,    84,    85,    86,     0,     0,   100,     0,
      89,    90,    91,    92,    93,    94,    95,    96,     0,     0,
      83,    84,    85,    86,     0,     0,     0,     0,    89,    90,
      91,    92,     0,    99,    95,    96,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,   100
};

static const yytype_int16 yycheck[] =
{
       5,     2,     5,    55,    29,    11,    12,    13,    14,    13,
      14,     8,     6,     0,    62,    21,    22,     9,    12,    20,
      10,    18,    47,    17,     4,     6,    29,     6,     6,    11,
      12,    13,    14,    38,    39,    40,    42,    29,    42,    29,
      42,     8,    36,    49,    49,    49,    62,    49,    62,    10,
      44,    18,    10,    10,    10,    10,    61,    62,   110,    53,
      42,    10,    56,    10,    60,    10,    10,    49,    62,    63,
       3,     6,   124,    78,    45,     6,   128,    10,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     6,     8,    30,    31,    32,
      33,    40,   103,    62,    46,     6,    39,     8,   113,   114,
      62,    12,     6,     6,    46,   120,    17,    50,    48,    52,
       7,    54,    55,     6,    57,    58,    59,    29,    62,    62,
      58,     6,     8,    29,    63,    36,    63,    38,    62,    34,
      63,    41,    62,    44,     6,     4,     9,    18,   153,    62,
     151,    10,    53,   158,   206,    56,   208,   209,     8,     7,
      63,    62,    63,    12,     6,   170,     6,    37,    29,   221,
      12,    30,    31,    32,    33,    17,    62,    29,    63,     5,
      39,   186,    62,    62,    10,   190,   191,     7,     7,    63,
     195,    50,   197,    52,    36,    54,    55,   202,    57,    58,
      59,    58,    44,    62,    30,    31,    32,    33,     9,   214,
       6,    53,     7,    39,    56,    62,     6,    35,   155,   118,
      62,    63,   103,   200,    50,    10,    52,   232,    54,    55,
      -1,    57,    58,    59,    -1,    -1,    62,    -1,    -1,   244,
      -1,    -1,    -1,   248,    -1,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      52,    -1,    54,    55,    -1,    57,    58,    59,     7,    -1,
      62,    -1,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    42,    11,    12,    13,    14,    15,    16,
      49,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    42,    11,    12,    13,    14,
      15,    16,    49,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    42,    11,    12,
      13,    14,    15,    16,    49,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    42,
      11,    12,    13,    14,    15,    16,    49,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    42,    11,    12,    13,    14,    15,    16,    49,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    42,    11,    12,    13,    14,    15,    16,
      49,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    42,    11,    12,    13,    14,
      15,    16,    49,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    42,    11,    12,
      13,    14,    15,    16,    49,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    42,
      11,    12,    13,    14,    15,    16,    49,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    42,    11,    12,    13,    14,    15,    16,    49,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    42,    11,    12,    13,    14,    15,    16,
      49,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,
      15,    16,    49,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,     9,    51,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    49,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    49,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    11,    12,    13,    14,    15,    16,    49,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    11,    12,    13,    14,    15,    16,
      49,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,
      15,    16,    49,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,    12,
      13,    14,    15,    16,    49,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      11,    12,    13,    14,    15,    -1,    49,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    11,    12,    13,    14,    -1,    -1,    49,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    42,    25,    26,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,    10,    30,    31,    32,    33,    39,
      50,    52,    54,    55,    57,    58,    59,    61,    62,    67,
      71,    72,    73,    74,    77,    81,    85,    86,    87,    89,
      90,    91,    93,    96,    99,   101,   102,   103,     6,    12,
      17,    36,    44,    53,    56,    62,    63,   104,     6,     6,
      82,     4,     6,    62,    62,   100,    97,    94,    62,    68,
      69,     8,    18,     3,    72,    10,    10,    10,    10,    10,
      10,    10,    60,    10,    10,   104,   104,   104,     6,    45,
       6,     6,     8,    11,    12,    13,    14,    15,    16,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    42,
      49,    62,   104,     4,    70,    72,    40,    78,    79,    62,
      88,    46,    70,     6,     6,     8,    18,    10,    29,   104,
       8,    38,    62,   104,    92,     7,   104,    46,   106,    62,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,    48,     7,
       7,    71,    83,     6,     5,    29,    29,    70,    75,    58,
     104,   104,    63,    63,    69,     9,   104,     6,     8,    70,
      29,    62,    70,    29,     9,    43,    63,   107,   108,     5,
      34,   104,    41,    79,    62,   104,     6,     7,     7,     9,
      18,    51,    62,    63,   104,     8,     7,   105,    63,    12,
      29,    47,     6,     7,    62,    29,    76,   104,    98,    95,
     104,   104,    29,    37,    29,   104,   109,   104,    63,   108,
     104,    80,    62,    70,     7,    70,    70,     9,    62,    63,
     104,     9,    29,    29,     7,    70,     7,    58,     7,     9,
       7,   104,    62,    84,     6,     7,    35,   104,     6,     7,
     104,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 205 "Acse.y"
    {
            /* Notify the end of the program. Once called
             * the function `set_end_Program' - if necessary -
             * introduces a `HALT' instruction into the
             * list of instructions. */
            set_end_Program(program);

            /* return from yyparse() */
            YYACCEPT;
         ;}
    break;

  case 3:
#line 217 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 4:
#line 218 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 5:
#line 222 "Acse.y"
    {
                     /* update the program infos by adding new variables */
                     set_new_variables(program, (yyvsp[(1) - (3)].intval), (yyvsp[(2) - (3)].list));
                  ;}
    break;

  case 6:
#line 229 "Acse.y"
    {  /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].decl), -1);
                  ;}
    break;

  case 7:
#line 233 "Acse.y"
    {
                     /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement(NULL, (yyvsp[(1) - (1)].decl), -1);
                  ;}
    break;

  case 8:
#line 240 "Acse.y"
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[(1) - (3)].svalue), 0, 0, (yyvsp[(3) - (3)].intval));

               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            ;}
    break;

  case 9:
#line 249 "Acse.y"
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[(1) - (4)].svalue), 1, (yyvsp[(3) - (4)].intval), 0);

                  /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            ;}
    break;

  case 10:
#line 258 "Acse.y"
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[(1) - (1)].svalue), 0, 0, 0);
               
               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            ;}
    break;

  case 11:
#line 270 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 12:
#line 271 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 13:
#line 275 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 14:
#line 276 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 15:
#line 281 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 16:
#line 282 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 17:
#line 283 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 18:
#line 284 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 19:
#line 285 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 20:
#line 286 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 21:
#line 287 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 22:
#line 288 "Acse.y"
    { gen_nop_instruction(program); ;}
    break;

  case 23:
#line 294 "Acse.y"
    {
      t_axe_variable *r_c = getVariable(program, (yyvsp[(3) - (8)].svalue));
      t_axe_variable *r_a = getVariable(program, (yyvsp[(5) - (8)].svalue));
      t_axe_variable *r_b = getVariable(program, (yyvsp[(7) - (8)].svalue));

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
               int r_v1 = loadArrayElement(program, (yyvsp[(5) - (8)].svalue), create_expression(r_i, REGISTER));
               int r_v2 = loadArrayElement(program, (yyvsp[(7) - (8)].svalue), create_expression(r_i, REGISTER));
               int r_dest = getNewRegister(program);

               gen_eorb_instruction(program, r_dest, r_v1, r_v2, CG_DIRECT_ALL);
               
               storeArrayElement(program, (yyvsp[(3) - (8)].svalue), 
                  create_expression(r_i, REGISTER), 
                  create_expression(r_dest, REGISTER));

               gen_addi_instruction(program, r_i, r_i, 1);
               gen_bt_instruction(program, next, 0);

               assignLabel(program, exit);
         }
      }
      free((yyvsp[(3) - (8)].svalue));
      free((yyvsp[(5) - (8)].svalue));
      free((yyvsp[(7) - (8)].svalue));
   ;}
    break;

  case 24:
#line 348 "Acse.y"
    { // $4
      (yyvsp[(1) - (3)].loop_decr_stmt).l_check = newLabel(program);
      gen_bt_instruction(program, (yyvsp[(1) - (3)].loop_decr_stmt).l_check, 0);

      (yyvsp[(1) - (3)].loop_decr_stmt).l_loop = assignNewLabel(program);
   ;}
    break;

  case 25:
#line 355 "Acse.y"
    { /* $6 */
      int r_s = get_symbol_location(program, (yyvsp[(2) - (5)].svalue), 0);

      if ((yyvsp[(5) - (5)].expr).expression_type == IMMEDIATE) {
         gen_subi_instruction(program, r_s, r_s, (yyvsp[(5) - (5)].expr).value);
      } else {
         gen_sub_instruction(program, r_s, r_s, (yyvsp[(5) - (5)].expr).value, CG_DIRECT_ALL);
      }

      assignLabel(program, (yyvsp[(1) - (5)].loop_decr_stmt).l_check);
      gen_subi_instruction(program, REG_0, r_s, 0);
      (yyvsp[(1) - (5)].loop_decr_stmt).l_exit = newLabel(program);
      gen_ble_instruction(program, (yyvsp[(1) - (5)].loop_decr_stmt).l_exit, 0);
   ;}
    break;

  case 26:
#line 371 "Acse.y"
    {
      gen_bne_instruction(program, (yyvsp[(1) - (11)].loop_decr_stmt).l_loop, 0);
      assignLabel(program, (yyvsp[(1) - (11)].loop_decr_stmt).l_exit);

      free((yyvsp[(2) - (11)].svalue));
   ;}
    break;

  case 27:
#line 381 "Acse.y"
    {
                              t_axe_variable *v_dest = getVariable(program, (yyvsp[(6) - (6)].svalue));
                              if (v_dest->isArray)
                                 yyerror("Dest is an array.");
                              /* Retrieve the register of the variable */
                              int r_dest = get_symbol_location(program, (yyvsp[(6) - (6)].svalue), 0);
                              gen_add_instruction(program, r_dest, REG_0, (yyvsp[(3) - (6)].intval), CG_DIRECT_ALL);
                           ;}
    break;

  case 28:
#line 393 "Acse.y"
    {
               (yyval.intval) = (yyvsp[(1) - (3)].intval);
               gen_add_instruction(program, (yyval.intval), (yyval.intval), (yyvsp[(3) - (3)].intval), CG_DIRECT_ALL);
            ;}
    break;

  case 29:
#line 399 "Acse.y"
    {
               (yyval.intval) = (yyvsp[(1) - (1)].intval);
            ;}
    break;

  case 30:
#line 406 "Acse.y"
    { /* $5 */
               int reg;
               (yyvsp[(1) - (4)].when_stmt).bypass = newLabel(program);
               t_axe_expression norm_exp = 
                     handle_binary_comparison(program,
                        (yyvsp[(3) - (4)].expr),
                        create_expression(0, IMMEDIATE),
                        _NOTEQ_
                     );
               if (norm_exp.expression_type == IMMEDIATE) {
                  if (norm_exp.value == 0) {
                     reg = gen_load_immediate(program, 0);
                     gen_bt_instruction(program, (yyvsp[(1) - (4)].when_stmt).bypass, 0);
                  } else {
                     reg = gen_load_immediate(program, 1);
                  }
               } else {
                  reg = norm_exp.value;
                  gen_beq_instruction(program, (yyvsp[(1) - (4)].when_stmt).bypass, 0);
               }
               (yyvsp[(1) - (4)].when_stmt).reg = reg;
            ;}
    break;

  case 31:
#line 430 "Acse.y"
    { 
               assignLabel(program, (yyvsp[(1) - (6)].when_stmt).bypass);
               (yyval.intval) = (yyvsp[(1) - (6)].when_stmt).reg;
            ;}
    break;

  case 32:
#line 438 "Acse.y"
    {
                        (yyvsp[(1) - (1)].iterate_stmt).i_reg = gen_load_immediate(program, 0);
                        (yyvsp[(1) - (1)].iterate_stmt).c_reg = getNewRegister(program);

                        (yyvsp[(1) - (1)].iterate_stmt).label_seed = newLabel(program);
                        gen_bt_instruction(program, (yyvsp[(1) - (1)].iterate_stmt).label_seed, 0);
                        (yyvsp[(1) - (1)].iterate_stmt).label_codeblock = assignNewLabel(program);
                     ;}
    break;

  case 33:
#line 446 "Acse.y"
    {
                        gen_addi_instruction(program, (yyvsp[(1) - (3)].iterate_stmt).i_reg, (yyvsp[(1) - (3)].iterate_stmt).i_reg, 1);
                        (yyvsp[(1) - (3)].iterate_stmt).label_condition = newLabel(program);
                        gen_bt_instruction(program, (yyvsp[(1) - (3)].iterate_stmt).label_condition, 0);
                        assignLabel(program, (yyvsp[(1) - (3)].iterate_stmt).label_seed);
                     ;}
    break;

  case 34:
#line 452 "Acse.y"
    {
                        if((yyvsp[(7) - (8)].expr).expression_type == IMMEDIATE) {
                           /* $7.value is the ACTUAL value of the expression */
                           gen_move_immediate(program, (yyvsp[(1) - (8)].iterate_stmt).c_reg, (yyvsp[(7) - (8)].expr).value);
                        } else {
                           /* $7.value is a REGISTER IDENTIFIER where the value of the
                              expression will be placed at runtime
                            */
                           gen_add_instruction(program, (yyvsp[(1) - (8)].iterate_stmt).c_reg, REG_0, (yyvsp[(7) - (8)].expr).value, CG_DIRECT_ALL);
                        }
                        assignLabel(program, (yyvsp[(1) - (8)].iterate_stmt).label_condition);
                     ;}
    break;

  case 35:
#line 464 "Acse.y"
    {
                        (yyvsp[(1) - (13)].iterate_stmt).label_exit = newLabel(program);
                        t_axe_expression cond_exp = handle_binary_comparison(program, (yyvsp[(12) - (13)].expr), 
                                                    create_expression(0, IMMEDIATE),
                                                    _NOTEQ_);   /* exp2 != 0 */
                        if (cond_exp.expression_type == IMMEDIATE) {
                           if (cond_exp.value == 0) {
                              /* Ignore this case */
                           } else {
                              gen_bt_instruction(program, (yyvsp[(1) - (13)].iterate_stmt).label_exit, 0);
                           }
                        } else {
                           gen_bne_instruction(program, (yyvsp[(1) - (13)].iterate_stmt).label_exit, 0);
                        }
                        t_axe_expression loopCntExp = handle_binary_comparison(program, 
                                                      create_expression((yyvsp[(1) - (13)].iterate_stmt).i_reg, REGISTER), 
                                                      create_expression((yyvsp[(1) - (13)].iterate_stmt).c_reg, REGISTER),
                                                      _LT_);
                        gen_bne_instruction(program, (yyvsp[(1) - (13)].iterate_stmt).label_codeblock, 0);
                        assignLabel(program, (yyvsp[(1) - (13)].iterate_stmt).label_exit);
                     ;}
    break;

  case 36:
#line 488 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 37:
#line 489 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 38:
#line 490 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 39:
#line 491 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 40:
#line 492 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 41:
#line 493 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 42:
#line 498 "Acse.y"
    {
      t_break_stmt *top = LDATA(breakStack);
      gen_bt_instruction(program, top->l_exit, 0);
   ;}
    break;

  case 43:
#line 507 "Acse.y"
    {
      t_axe_variable *var = getVariable(program, (yyvsp[(2) - (2)].svalue));

      if (var->isArray) {
         yyerror("Unexpected argument to converge statement. Arrays are not accepted.");
         YYERROR;
      }

      (yyvsp[(1) - (2)].converge_stmt).r_tmp = getNewRegister(program);
      (yyvsp[(1) - (2)].converge_stmt).r_var = get_symbol_location(program, (yyvsp[(2) - (2)].svalue), 0);

      (yyvsp[(1) - (2)].converge_stmt).l_loop = assignNewLabel(program);
      gen_add_instruction(program, (yyvsp[(1) - (2)].converge_stmt).r_tmp, REG_0, (yyvsp[(1) - (2)].converge_stmt).r_var, CG_DIRECT_ALL);
   ;}
    break;

  case 44:
#line 522 "Acse.y"
    {
      gen_sub_instruction(program, REG_0, (yyvsp[(1) - (4)].converge_stmt).r_var, (yyvsp[(1) - (4)].converge_stmt).r_tmp, CG_DIRECT_ALL);
      gen_bne_instruction(program, (yyvsp[(1) - (4)].converge_stmt).l_loop, 0);
      
      free((yyvsp[(2) - (4)].svalue));
   ;}
    break;

  case 45:
#line 529 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 46:
#line 530 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 47:
#line 534 "Acse.y"
    {
               /* Notify to `program' that the value $6
                * have to be assigned to the location
                * addressed by $1[$3]. Where $1 is obviously
                * the array/pointer identifier, $3 is an expression
                * that holds an integer value. That value will be
                * used as an index for the array $1 */
               storeArrayElement(program, (yyvsp[(1) - (6)].svalue), (yyvsp[(3) - (6)].expr), (yyvsp[(6) - (6)].expr));

               /* free the memory associated with the IDENTIFIER.
                * The use of the free instruction is required
                * because of the value associated with IDENTIFIER.
                * The value of IDENTIFIER is a string created
                * by a call to the function `strdup' (see Acse.lex) */
               free((yyvsp[(1) - (6)].svalue));
            ;}
    break;

  case 48:
#line 551 "Acse.y"
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
               location = get_symbol_location(program, (yyvsp[(1) - (3)].svalue), 0);

               /* update the value of location */
               if ((yyvsp[(3) - (3)].expr).expression_type == IMMEDIATE)
                  gen_move_immediate(program, location, (yyvsp[(3) - (3)].expr).value);
               else
                  gen_add_instruction(program,
                                      location,
                                      REG_0,
                                      (yyvsp[(3) - (3)].expr).value,
                                      CG_DIRECT_ALL);

               /* free the memory associated with the IDENTIFIER */
               free((yyvsp[(1) - (3)].svalue));
            ;}
    break;

  case 49:
#line 581 "Acse.y"
    { // SLICE operator
            /*    $1       $2       $3       $4      $5    $6     $7     $8    */
               /* Check if IDENTIFIERS are identifiers of arrays */
               t_axe_variable *v_destArray = getVariable(program, (yyvsp[(1) - (8)].svalue));
               t_axe_variable *v_srcArray = getVariable(program, (yyvsp[(3) - (8)].svalue));

               if (!v_destArray->isArray || !v_srcArray->isArray)
                  yyerror("Ouch");
               
               /* We can do this since NUMBER are constants */
               if ((yyvsp[(5) - (8)].intval) < 0 || (yyvsp[(7) - (8)].intval) < 0)
                  yyerror("Cripes!");

               /* Allocate an array of registers */
               /* How many? at maximum we need the size of the array itself */
               /* 'calloc' fills with zeros the allocated area */
               int *r_tmpRegs = calloc(sizeof(int), v_destArray->arraySize);
               int i = 0, j = (yyvsp[(5) - (8)].intval);

               /* Each register correspond to a value  */
               do {
                  r_tmpRegs[i] = loadArrayElement(program, (yyvsp[(3) - (8)].svalue), 
                                                  create_expression(j, IMMEDIATE));
                  i++;

                  if (j == (yyvsp[(7) - (8)].intval))
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
                  storeArrayElement(program, (yyvsp[(1) - (8)].svalue), create_expression(i, IMMEDIATE), 
                                    create_expression(r_tmpRegs[i], REGISTER));
               }

               free(r_tmpRegs);
               free((yyvsp[(1) - (8)].svalue));
               free((yyvsp[(3) - (8)].svalue));
            ;}
    break;

  case 50:
#line 629 "Acse.y"
    {  // VCMP operator
            /*    $1       $2    $3   $4     $5       $6       $7      $8  */
               t_axe_variable *src1 = getVariable(program, (yyvsp[(5) - (8)].svalue));
               t_axe_variable *src2 = getVariable(program, (yyvsp[(7) - (8)].svalue));
               t_axe_variable *dest = getVariable(program, (yyvsp[(1) - (8)].svalue));

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
               int r_v1 = loadArrayElement(program, (yyvsp[(5) - (8)].svalue), create_expression(r_i, REGISTER));
               int r_v2 = loadArrayElement(program, (yyvsp[(7) - (8)].svalue), create_expression(r_i, REGISTER));
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
               
               storeArrayElement(program, (yyvsp[(1) - (8)].svalue), create_expression(r_i, REGISTER), dest_val);

               gen_addi_instruction(program, r_i, r_i, 1);
               gen_bt_instruction(program, next, 0);

               assignLabel(program, exit);
            ;}
    break;

  case 51:
#line 687 "Acse.y"
    {
                  /*
                     $1: variable to assign the result
                     $4: lower-bound
                     $6: upper-bound
                  */
                 t_axe_variable *v_dest = getVariable(program, (yyvsp[(1) - (7)].svalue));
                 int r_dest = get_symbol_location(program, (yyvsp[(1) - (7)].svalue), 0);

                  if (v_dest == NULL)
                     yyerror("Variable does not exists!");
                  
                  if (v_dest->isArray) { /* Array case */
                     int r_i = getNewRegister(program);
                     int r_n = getNewRegister(program);

                     gen_addi_instruction(program, r_i, REG_0, 0);
                     if ((yyvsp[(4) - (7)].expr).expression_type == REGISTER) {
                        gen_add_instruction(program, r_n, REG_0, (yyvsp[(4) - (7)].expr).value, CG_DIRECT_ALL);
                     } else {
                        gen_addi_instruction(program, r_n, REG_0, (yyvsp[(4) - (7)].expr).value);
                     }
                     t_axe_label *l_loop = assignNewLabel(program);
                     gen_sub_instruction(program, REG_0, r_i, v_dest->arraySize, CG_DIRECT_ALL);
                     t_axe_label *l_exit = newLabel(program);
                     gen_bge_instruction(program, l_exit, 0);

                     if ((yyvsp[(6) - (7)].expr).expression_type == REGISTER) {
                        gen_sub_instruction(program, REG_0, r_n, (yyvsp[(6) - (7)].expr).value, CG_DIRECT_ALL);
                     } else {
                        gen_subi_instruction(program, REG_0, r_n, (yyvsp[(6) - (7)].expr).value);
                     }
                     gen_beq_instruction(program, l_exit, 0);

                     storeArrayElement(program, 
                        (yyvsp[(1) - (7)].svalue), 
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
                           handle_binary_comparison(program, (yyvsp[(4) - (7)].expr), (yyvsp[(6) - (7)].expr), _EQ_);
                        if (e_check.expression_type == IMMEDIATE) {
                           // e_check.value == ($4.value == $6.value)
                           if (e_check.value == 0) {
                              gen_addi_instruction(program, r_dest, REG_0, (yyvsp[(4) - (7)].expr).value);
                           }
                        } else {
                           t_axe_label *l_skip = newLabel(program);
                           if ((yyvsp[(4) - (7)].expr).expression_type == IMMEDIATE) {
                              r_exp1 = gen_load_immediate(program, (yyvsp[(4) - (7)].expr).value);
                           } else {
                              r_exp1 = (yyvsp[(4) - (7)].expr).value;
                           }
                           gen_bne_instruction(program, l_skip, 0);
                           gen_add_instruction(program, r_dest, REG_0, r_exp1, CG_DIRECT_ALL);
                           assignLabel(program, l_skip);
                        }
                     }
                     
                     free((yyvsp[(1) - (7)].svalue)); 
               ;}
    break;

  case 52:
#line 787 "Acse.y"
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[(1) - (1)].label));
               ;}
    break;

  case 53:
#line 792 "Acse.y"
    {
                  /* reserve a new label that points to the address where to
                   * jump if `exp' is verified */
                  (yyvsp[(2) - (2)].label) = newLabel(program);
   
                  /* exit from the if-else */
                  gen_bt_instruction (program, (yyvsp[(2) - (2)].label), 0);
   
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[(1) - (2)].label));
               ;}
    break;

  case 54:
#line 804 "Acse.y"
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[(2) - (4)].label));
               ;}
    break;

  case 55:
#line 811 "Acse.y"
    {
                  /* the label that points to the address where to jump if
                   * `exp' is not verified */
                  (yyvsp[(1) - (1)].label) = newLabel(program);
               ;}
    break;

  case 56:
#line 817 "Acse.y"
    {
                     if ((yyvsp[(4) - (5)].expr).expression_type == IMMEDIATE)
                         gen_load_immediate(program, (yyvsp[(4) - (5)].expr).value);
                     else
                         gen_andb_instruction(program, (yyvsp[(4) - (5)].expr).value,
                             (yyvsp[(4) - (5)].expr).value, (yyvsp[(4) - (5)].expr).value, CG_DIRECT_ALL);

                     /* if `exp' returns FALSE, jump to the label $1 */
                     gen_beq_instruction (program, (yyvsp[(1) - (5)].label), 0);
               ;}
    break;

  case 57:
#line 827 "Acse.y"
    { (yyval.label) = (yyvsp[(1) - (7)].label); ;}
    break;

  case 58:
#line 831 "Acse.y"
    {
                     /* initialize the value of the non-terminal */
                     (yyvsp[(1) - (1)].while_stmt) = create_while_statement();

                     /* reserve and fix a new label */
                     (yyvsp[(1) - (1)].while_stmt).label_condition
                           = assignNewLabel(program);
                  ;}
    break;

  case 59:
#line 840 "Acse.y"
    {
                     if ((yyvsp[(4) - (5)].expr).expression_type == IMMEDIATE)
                        gen_load_immediate(program, (yyvsp[(4) - (5)].expr).value);
                     else
                         gen_andb_instruction(program, (yyvsp[(4) - (5)].expr).value,
                             (yyvsp[(4) - (5)].expr).value, (yyvsp[(4) - (5)].expr).value, CG_DIRECT_ALL);

                     /* reserve a new label. This new label will point
                      * to the first instruction after the while code
                      * block */
                     (yyvsp[(1) - (5)].while_stmt).label_end = newLabel(program);
                     
                     t_break_stmt *curBreak = malloc(sizeof(t_break_stmt));
                     curBreak->l_exit = (yyvsp[(1) - (5)].while_stmt).label_end;
                     breakStack = addFirst(breakStack, curBreak);

                     /* if `exp' returns FALSE, jump to the label 
                      * $1.label_end */
                     gen_beq_instruction (program, (yyvsp[(1) - (5)].while_stmt).label_end, 0);
                  ;}
    break;

  case 60:
#line 861 "Acse.y"
    {
                     /* jump to the beginning of the loop */
                     gen_bt_instruction
                           (program, (yyvsp[(1) - (7)].while_stmt).label_condition, 0);

                     /* fix the label `label_end' */
                     assignLabel(program, (yyvsp[(1) - (7)].while_stmt).label_end);

                     t_break_stmt *curBreak = (t_break_stmt *)LDATA(breakStack);
                     free(curBreak);
                     breakStack = removeFirst(breakStack);
                  ;}
    break;

  case 61:
#line 876 "Acse.y"
    {
                        /* the label that points to the address where to jump if
                         * `exp' is not verified */
                        (yyvsp[(1) - (1)].label) = newLabel(program);
                        
                        /* fix the label */
                        assignLabel(program, (yyvsp[(1) - (1)].label));

                        t_break_stmt *curBreak = malloc(sizeof(t_break_stmt));
                        curBreak->l_exit = newLabel(program);
                        breakStack = addFirst(breakStack, curBreak);
                     ;}
    break;

  case 62:
#line 889 "Acse.y"
    {
                           if ((yyvsp[(6) - (7)].expr).expression_type == IMMEDIATE)
                               gen_load_immediate(program, (yyvsp[(6) - (7)].expr).value);
                           else
                               gen_andb_instruction(program, (yyvsp[(6) - (7)].expr).value,
                                   (yyvsp[(6) - (7)].expr).value, (yyvsp[(6) - (7)].expr).value, CG_DIRECT_ALL);

                           /* if `exp' returns TRUE, jump to the label $1 */
                           gen_bne_instruction (program, (yyvsp[(1) - (7)].label), 0);

                           t_break_stmt *curBreak = (t_break_stmt *)LDATA(breakStack);
                           assignLabel(program, curBreak->l_exit);
                           free(curBreak);
                           breakStack = removeFirst(breakStack);
                     ;}
    break;

  case 63:
#line 907 "Acse.y"
    {
               /* insert an HALT instruction */
               gen_halt_instruction(program);
            ;}
    break;

  case 64:
#line 912 "Acse.y"
    {  
               if (returnStack == NULL) {
                  yyerror("Return with expression outside an exec operator!");
                  YYERROR;
               }
               t_return_stmt *top = (t_return_stmt *)LDATA(returnStack);

               if ((yyvsp[(2) - (2)].expr).expression_type == IMMEDIATE) {
                  gen_addi_instruction(program, top->r_exec_val, REG_0, (yyvsp[(2) - (2)].expr).value);
               } else {
                  gen_add_instruction(program, top->r_exec_val, REG_0, (yyvsp[(2) - (2)].expr).value, CG_DIRECT_ALL);
               }
               
               gen_bt_instruction(program, top->l_exit, 0);
            ;}
    break;

  case 65:
#line 930 "Acse.y"
    {
               int location;
               
               /* read from standard input an integer value and assign
                * it to a variable associated with the given identifier */
               /* get the location of the symbol with the given ID */
               
               /* lookup the symbol table and fetch the register location
                * associated with the IDENTIFIER $3. */
               location = get_symbol_location(program, (yyvsp[(3) - (4)].svalue), 0);

               /* insert a read instruction */
               gen_read_instruction (program, location);

               /* free the memory associated with the IDENTIFIER */
               free((yyvsp[(3) - (4)].svalue));
            ;}
    break;

  case 66:
#line 950 "Acse.y"
    {
               int location;

               if ((yyvsp[(3) - (4)].expr).expression_type == IMMEDIATE)
               {
                  /* load `immediate' into a new register. Returns the new
                   * register identifier or REG_INVALID if an error occurs */
                  location = gen_load_immediate(program, (yyvsp[(3) - (4)].expr).value);
               }
               else
                  location = (yyvsp[(3) - (4)].expr).value;

               /* write to standard output an integer value */
               gen_write_instruction (program, location);
            ;}
    break;

  case 67:
#line 967 "Acse.y"
    { (yyval.expr) = create_expression ((yyvsp[(1) - (1)].intval), IMMEDIATE); ;}
    break;

  case 68:
#line 968 "Acse.y"
    {
                     int location;
   
                     /* get the location of the symbol with the given ID */
                     location = get_symbol_location(program, (yyvsp[(1) - (1)].svalue), 0);
                     
                     /* return the register location of IDENTIFIER as
                      * a value for `exp' */
                     (yyval.expr) = create_expression (location, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free((yyvsp[(1) - (1)].svalue));
   ;}
    break;

  case 69:
#line 981 "Acse.y"
    {
                     int reg;
                     
                     /* load the value IDENTIFIER[exp]
                      * into `arrayElement' */
                     reg = loadArrayElement(program, (yyvsp[(1) - (4)].svalue), (yyvsp[(3) - (4)].expr));

                     /* create a new expression */
                     (yyval.expr) = create_expression (reg, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free((yyvsp[(1) - (4)].svalue));
   ;}
    break;

  case 70:
#line 994 "Acse.y"
    {
               if ((yyvsp[(2) - (2)].expr).expression_type == IMMEDIATE)
               {
                  /* IMMEDIATE (constant) expression: compute the value at
                   * compile-time and place the result in a new IMMEDIATE
                   * expression */
                  (yyval.expr) = create_expression(!((yyvsp[(2) - (2)].expr).value), IMMEDIATE);
               }
               else
               {
                  /* REGISTER expression: generate the code that will compute
                   * the result at compile time */

                  /* Reserve a new register for the result */
                  int output_register = getNewRegister(program);

                  /* Generate a NOTL instruction which will store the negated
                   * logic value into the register we reserved */
                  gen_notl_instruction(program, output_register, (yyvsp[(2) - (2)].expr).value);
                  
                  /* Return a REGISTER expression with the result register */
                  (yyval.expr) = create_expression(output_register, REGISTER);
               }
   ;}
    break;

  case 71:
#line 1018 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ANDB); ;}
    break;

  case 72:
#line 1019 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ORB); ;}
    break;

  case 73:
#line 1020 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ADD); ;}
    break;

  case 74:
#line 1021 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), SUB); ;}
    break;

  case 75:
#line 1022 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), MUL); ;}
    break;

  case 76:
#line 1023 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), DIV); ;}
    break;

  case 77:
#line 1024 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _LT_); ;}
    break;

  case 78:
#line 1025 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _GT_); ;}
    break;

  case 79:
#line 1026 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _EQ_); ;}
    break;

  case 80:
#line 1027 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _NOTEQ_); ;}
    break;

  case 81:
#line 1028 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _LTEQ_); ;}
    break;

  case 82:
#line 1029 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _GTEQ_); ;}
    break;

  case 83:
#line 1030 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), SHL); ;}
    break;

  case 84:
#line 1031 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), SHR); ;}
    break;

  case 85:
#line 1032 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ANDL); ;}
    break;

  case 86:
#line 1033 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ORL); ;}
    break;

  case 87:
#line 1034 "Acse.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 88:
#line 1035 "Acse.y"
    {
                  if ((yyvsp[(2) - (2)].expr).expression_type == IMMEDIATE)
                  {
                     (yyval.expr) = (yyvsp[(2) - (2)].expr);
                     (yyval.expr).value = - ((yyval.expr).value);
                  }
                  else
                  {
                     t_axe_expression exp_r0;

                     /* create an expression for register REG_0 */
                     exp_r0.value = REG_0;
                     exp_r0.expression_type = REGISTER;
                     
                     (yyval.expr) = handle_bin_numeric_op
                           (program, exp_r0, (yyvsp[(2) - (2)].expr), SUB);
                  }
               ;}
    break;

  case 89:
#line 1053 "Acse.y"
    {
   /*  $1    $2   $3   $4  $5   $6   $7   $8 */
      t_axe_expression op = (yyvsp[(3) - (8)].expr); 
      t_axe_expression lo = (yyvsp[(5) - (8)].expr);
      t_axe_expression hi = (yyvsp[(7) - (8)].expr);

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
            (yyval.expr) = create_expression(0, IMMEDIATE);
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
               (yyval.expr) = res;
            } else {
               (yyval.expr) = res;
            }
         } else {
            (yyval.expr) = create_expression(getNewRegister(program), REGISTER);
            t_axe_label *label_exit = newLabel(program);
            
            if (res.expression_type == IMMEDIATE) {
               gen_move_immediate(program, (yyval.expr).value, res.value);
            } else {
               gen_add_instruction(program, (yyval.expr).value, 
                                    REG_0, res.value, CG_DIRECT_ALL);
            }

            if (!skipComputationDyn) {
               gen_bt_instruction(program, label_exit, 0);
               assignLabel(program, skipComputationDyn);
               gen_move_immediate(program, (yyval.expr).value, 0);
            }
            assignLabel(program, label_exit);
         }
      }
   ;}
    break;

  case 90:
#line 1133 "Acse.y"
    { /* $5 */
      (yyvsp[(1) - (4)].invariant_stmt).begin_code = newLabel(program);
      gen_bt_instruction(program, (yyvsp[(1) - (4)].invariant_stmt).begin_code, 0);

      (yyvsp[(1) - (4)].invariant_stmt).eval_exp = assignNewLabel(program);
   ;}
    break;

  case 91:
#line 1138 "Acse.y"
    {
   /* $6   $7      $8       $9   */
      (yyvsp[(1) - (9)].invariant_stmt).end_eval_exp = newLabel(program);
      gen_bt_instruction(program, (yyvsp[(1) - (9)].invariant_stmt).end_eval_exp, 0);

      assignLabel(program, (yyvsp[(1) - (9)].invariant_stmt).begin_code);

      t_axe_variable *v_array = getVariable(program, (yyvsp[(3) - (9)].svalue));

      if (!v_array->isArray)
         yyerror("1st arg is not an array!");

      if ((yyvsp[(6) - (9)].expr).expression_type == IMMEDIATE) {
         (yyval.expr) = create_expression((yyvsp[(6) - (9)].expr).value ? 1 : 0, IMMEDIATE);
      } else { /* REGISTER */
         int r_res = gen_load_immediate(program, 1);
         (yyval.expr) = create_expression(r_res, REGISTER);
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
         int r_var = get_symbol_location(program, (yyvsp[(8) - (9)].svalue), 0);
         int r_temp = loadArrayElement(program, 
                           (yyvsp[(3) - (9)].svalue), create_expression(r_loopc, REGISTER));
         gen_add_instruction(program, r_var, REG_0, r_temp, CG_DIRECT_ALL);

         gen_bt_instruction(program, (yyvsp[(1) - (9)].invariant_stmt).eval_exp, 0);
         assignLabel(program, (yyvsp[(1) - (9)].invariant_stmt).end_eval_exp);
         gen_andb_instruction(program, (yyvsp[(6) - (9)].expr).value, (yyvsp[(6) - (9)].expr).value, (yyvsp[(6) - (9)].expr).value, CG_DIRECT_ALL);
         t_axe_label *skip_failure = newLabel(program);
         gen_bne_instruction(program, skip_failure, 0);

         gen_add_instruction(program, r_res, REG_0, REG_0, CG_DIRECT_ALL);
         gen_bt_instruction(program, label_exit, 0);

         assignLabel(program, skip_failure);
         gen_addi_instruction(program, r_loopc, r_loopc, 1);
         gen_bt_instruction(program, label_loop, 0);

         assignLabel(program, label_exit);
      }
      free((yyvsp[(3) - (9)].svalue));
      free((yyvsp[(8) - (9)].svalue));
   ;}
    break;

  case 92:
#line 1192 "Acse.y"
    {
   /* $1   $2   $3  $4  $5    */
      if ((yyvsp[(5) - (5)].intval) > 32)
         (yyvsp[(5) - (5)].intval) = 32;

      int mask_b = (1 << (32 - (yyvsp[(5) - (5)].intval))) - 1;
      int mask_a = ~mask_b;

      (yyval.expr) =  handle_bin_numeric_op(program,
               handle_bin_numeric_op(program,
                     (yyvsp[(1) - (5)].expr),
                     create_expression(mask_a, IMMEDIATE),
                     ANDB),
               handle_bin_numeric_op(program,
                     (yyvsp[(3) - (5)].expr),
                     create_expression(mask_b, IMMEDIATE),
                     ANDB),
            ORB);

   ;}
    break;

  case 93:
#line 1212 "Acse.y"
    {
   /* $1    $2    $3    $4        $5      $6       $7    */
      t_axe_variable *arr = getVariable(program, (yyvsp[(4) - (7)].svalue));
      
      if (!arr->isArray)
         yyerror("Please, input must be an array.");

      t_axe_expression sum = create_expression(0, IMMEDIATE);

      t_list *cur = (yyvsp[(6) - (7)].list);
      for (int i = 0; i < arr->arraySize; i++) {
         if (cur == NULL)
            yyerror("Expression list too short!");
         t_axe_expression *cur_exp = (t_axe_expression *)LDATA(cur);
         int r_val = loadArrayElement(program, (yyvsp[(4) - (7)].svalue), 
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

      (yyval.expr) = sum;
      freeList((yyvsp[(6) - (7)].list));
   ;}
    break;

  case 94:
#line 1245 "Acse.y"
    {
      (yyval.expr) = handle_bin_numeric_op(program,
               (yyvsp[(1) - (5)].expr),
               create_expression((yyvsp[(4) - (5)].intval), IMMEDIATE),
               ANDB);
   ;}
    break;

  case 95:
#line 1251 "Acse.y"
    {
      t_return_stmt *curReturn = malloc(sizeof(t_return_stmt));
      curReturn->r_exec_val = gen_load_immediate(program, 0);
      curReturn->l_exit = newLabel(program);
      returnStack = addFirst(returnStack, curReturn);
   ;}
    break;

  case 96:
#line 1256 "Acse.y"
    {
      t_return_stmt *top = (t_return_stmt *)LDATA(returnStack);
      (yyval.expr) = create_expression(top->r_exec_val, REGISTER);
      assignLabel(program, top->l_exit);
      returnStack = removeFirst(returnStack);
      free(top);
   ;}
    break;

  case 97:
#line 1266 "Acse.y"
    {
         if (((yyvsp[(1) - (3)].intval) & (yyvsp[(3) - (3)].intval)) != 0) {
            yyerror("Ranges overlap!");
         }

         (yyval.intval) = (yyvsp[(1) - (3)].intval) | (yyvsp[(3) - (3)].intval);
      ;}
    break;

  case 98:
#line 1273 "Acse.y"
    {
         (yyval.intval) = (yyvsp[(1) - (1)].intval);
      ;}
    break;

  case 99:
#line 1281 "Acse.y"
    {
         if ((yyvsp[(1) - (3)].intval) > (yyvsp[(3) - (3)].intval) || (yyvsp[(1) - (3)].intval) < 0 || (yyvsp[(1) - (3)].intval) > 31 || (yyvsp[(3) - (3)].intval) < 0 || (yyvsp[(3) - (3)].intval) > 31) {
            yyerror("Range boundaries not ordered.");
         }

         int min = (yyvsp[(1) - (3)].intval), max = (yyvsp[(3) - (3)].intval);
         (yyval.intval) = ((1 << (max - min + 1)) - 1) << min;
      ;}
    break;

  case 100:
#line 1291 "Acse.y"
    {
         /*   $1     $2    $3    */
            t_axe_expression *our_exp = malloc(sizeof(t_axe_expression));
            *our_exp = (yyvsp[(3) - (3)].expr); // copy the value $3 in the allocated area
            /*
               the previous assignment is equivalent to
               our_exp->value = $3.value
               our_exp->type = $3.type
            */

            (yyval.list) = addElement((yyvsp[(1) - (3)].list), (void *)our_exp, -1);
         ;}
    break;

  case 101:
#line 1303 "Acse.y"
    {
         /* $1 */
            /* $1 is not a pointer (is a value allocated on the stack)
               ===> The element of a list, however, must be a pointer!!
               Thus, we need to do this trick:
             */
            t_axe_expression *our_exp = malloc(sizeof(t_axe_expression));
            *our_exp = (yyvsp[(1) - (1)].expr); // copy the value $1 in the allocated area

            /* NULL because the list is empty */
            (yyval.list) = addElement(NULL, (void *)our_exp, -1);
         ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3327 "obj/Acse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1317 "Acse.y"

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

