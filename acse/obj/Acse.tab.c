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
     CONVERGE = 307,
     LOOP_DECREASING = 308,
     INVARIANT = 309,
     DO = 310,
     WHILE = 311,
     IF = 312,
     ELSE = 313,
     TYPE = 314,
     IDENTIFIER = 315,
     NUMBER = 316
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
#define CONVERGE 307
#define LOOP_DECREASING 308
#define INVARIANT 309
#define DO 310
#define WHILE 311
#define IF 312
#define ELSE 313
#define TYPE 314
#define IDENTIFIER 315
#define NUMBER 316




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
#line 104 "Acse.y"
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
#line 331 "obj/Acse.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 344 "obj/Acse.tab.c"

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
#define YYLAST   1087

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      55,    56,    57,    58,    59,    60,    61
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
     136,   138,   139,   144,   146,   148,   155,   159,   168,   177,
     185,   187,   188,   193,   194,   195,   203,   204,   205,   213,
     214,   222,   224,   229,   234,   236,   238,   243,   246,   250,
     254,   258,   262,   266,   270,   274,   278,   282,   286,   290,
     294,   298,   302,   306,   310,   314,   317,   326,   327,   337,
     343,   351,   357,   361,   363,   367,   371
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    69,     3,    -1,    64,    65,    -1,
      -1,    59,    66,    10,    -1,    66,    29,    67,    -1,    67,
      -1,    60,    18,    61,    -1,    60,     8,    61,     9,    -1,
      60,    -1,    70,    -1,     4,    69,     5,    -1,    69,    70,
      -1,    70,    -1,    87,    10,    -1,    83,    -1,    86,    10,
      -1,    79,    10,    -1,    72,    10,    -1,    75,    10,    -1,
      71,    10,    -1,    10,    -1,    50,     6,    60,    29,    60,
      29,    60,     7,    -1,    -1,    -1,    53,    60,    46,    73,
     101,    74,    68,    56,     6,   101,     7,    -1,    39,     4,
      76,     5,    41,    60,    -1,    76,    29,    77,    -1,    77,
      -1,    -1,    40,     6,   101,     7,    78,    68,    -1,    -1,
      -1,    -1,    33,    80,    68,    81,    34,     6,   101,     7,
      82,    35,     6,   101,     7,    -1,    88,    -1,    93,    -1,
      96,    10,    -1,    98,    10,    -1,    84,    -1,    -1,    52,
      60,    85,    68,    -1,    99,    -1,   100,    -1,    60,     8,
     101,     9,    18,   101,    -1,    60,    18,   101,    -1,    60,
      18,    60,     8,    61,    37,    61,     9,    -1,    60,    18,
      38,     6,    60,    29,    60,     7,    -1,    60,    18,     8,
     101,    51,   101,     9,    -1,    90,    -1,    -1,    90,    58,
      89,    68,    -1,    -1,    -1,    57,    91,     6,   101,     7,
      92,    68,    -1,    -1,    -1,    56,    94,     6,   101,     7,
      95,    68,    -1,    -1,    55,    97,    68,    56,     6,   101,
       7,    -1,    30,    -1,    31,     6,    60,     7,    -1,    32,
       6,   101,     7,    -1,    61,    -1,    60,    -1,    60,     8,
     101,     9,    -1,    17,   101,    -1,   101,    15,   101,    -1,
     101,    16,   101,    -1,   101,    11,   101,    -1,   101,    12,
     101,    -1,   101,    13,   101,    -1,   101,    14,   101,    -1,
     101,    19,   101,    -1,   101,    20,   101,    -1,   101,    23,
     101,    -1,   101,    24,   101,    -1,   101,    25,   101,    -1,
     101,    26,   101,    -1,   101,    21,   101,    -1,   101,    22,
     101,    -1,   101,    27,   101,    -1,   101,    28,   101,    -1,
       6,   101,     7,    -1,    12,   101,    -1,    36,     6,   101,
      29,   101,    29,   101,     7,    -1,    -1,    54,     6,    60,
      29,   102,   101,    29,    60,     7,    -1,   101,    42,   101,
      43,    61,    -1,    44,    45,    46,    60,     8,   105,     9,
      -1,   101,    49,    48,   103,    47,    -1,   103,    29,   104,
      -1,   104,    -1,    61,    12,    61,    -1,   105,    29,   101,
      -1,   101,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   200,   200,   213,   214,   217,   224,   228,   235,   244,
     253,   266,   267,   271,   272,   277,   278,   279,   280,   281,
     282,   283,   284,   288,   344,   351,   342,   375,   387,   393,
     402,   400,   434,   442,   448,   434,   484,   485,   486,   487,
     488,   494,   492,   514,   515,   518,   535,   566,   614,   670,
     771,   777,   776,   796,   802,   795,   816,   825,   815,   853,
     852,   874,   881,   901,   919,   920,   933,   946,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,   983,   984,   985,   986,   987,  1005,  1085,  1083,  1144,
    1164,  1197,  1206,  1213,  1219,  1231,  1243
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
  "CONVERGE", "LOOP_DECREASING", "INVARIANT", "DO", "WHILE", "IF", "ELSE",
  "TYPE", "IDENTIFIER", "NUMBER", "$accept", "program", "var_declarations",
  "var_declaration", "declaration_list", "declaration", "code_block",
  "statements", "statement", "vec_xor_statement",
  "loop_decreasing_statement", "@1", "@2", "count_when_into_statement",
  "when_list", "when_block", "@3", "iterate_statement", "@4", "@5", "@6",
  "control_statement", "converge_statement", "@7", "read_write_statement",
  "assign_statement", "if_statement", "@8", "if_stmt", "@9", "@10",
  "while_statement", "@11", "@12", "do_while_statement", "@13",
  "return_statement", "read_statement", "write_statement", "exp", "@14",
  "range_list", "range", "exp_list", 0
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
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    66,    66,    67,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    73,    74,    72,    75,    76,    76,
      78,    77,    80,    81,    82,    79,    83,    83,    83,    83,
      83,    85,    84,    86,    86,    87,    87,    87,    87,    87,
      88,    89,    88,    91,    92,    90,    94,    95,    93,    97,
      96,    98,    99,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   101,   101,
     101,   101,   103,   103,   104,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     3,     3,     1,     3,     4,
       1,     1,     3,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     1,     8,     0,     0,    11,     6,     3,     1,
       0,     6,     0,     0,     0,    13,     1,     1,     2,     2,
       1,     0,     4,     1,     1,     6,     3,     8,     8,     7,
       1,     0,     4,     0,     0,     7,     0,     0,     7,     0,
       7,     1,     4,     4,     1,     1,     4,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     8,     0,     9,     5,
       7,     5,     3,     1,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    22,    61,     0,     0,    32,     0,
       0,     0,     0,    59,    56,    53,     0,     0,     3,     0,
      14,     0,     0,     0,     0,    16,    40,     0,     0,    36,
      50,    37,     0,     0,    43,    44,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    10,     0,     7,     0,
       0,     2,    13,    21,    19,    20,    18,    17,    15,    51,
      38,    39,     0,     0,     0,     0,     0,     0,     0,    65,
      64,     0,     0,    33,    11,     0,     0,    29,     0,     0,
      24,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,    65,    46,     0,    62,     0,    85,    67,     0,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     8,     6,     0,     0,     0,     0,    52,
      84,     0,     0,     0,     0,    70,    71,    72,    73,    68,
      69,    74,    75,    80,    81,    76,    77,    78,    79,    82,
      83,     0,     0,    12,     0,     0,     0,    28,     0,    25,
       0,    57,    54,     9,     0,     0,     0,    64,     0,     0,
      87,    66,     0,     0,     0,    93,     0,    30,    27,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,    89,     0,     0,    91,     0,     0,     0,     0,    60,
      58,    55,    49,     0,     0,     0,    96,     0,     0,    94,
      92,    34,    31,    23,     0,    48,    47,     0,    90,     0,
       0,     0,     0,    86,    95,     0,     0,     0,    88,     0,
      26,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    18,    47,    48,    73,    19,    74,    21,
      22,   128,   190,    23,    76,    77,   206,    24,    38,   122,
     231,    25,    26,    79,    27,    28,    29,    93,    30,    45,
     193,    31,    44,   192,    32,    43,    33,    34,    35,   144,
     200,   184,   185,   217
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const yytype_int16 yypact[] =
{
     -43,    10,   250,   -43,   -43,   -43,    11,    30,   -43,    35,
      34,   -18,   -13,   -43,   -43,   -43,   -12,     0,   -43,   144,
     -43,    39,    44,    45,    46,   -43,   -43,    48,    73,   -43,
      29,   -43,    74,    79,   -43,   -43,    32,    -1,   175,    55,
      36,   -43,    52,   175,    91,   101,    26,    -4,   -43,    -1,
      82,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   112,    -1,    -1,    -1,   102,    76,   116,   115,
     -43,   332,   281,   -43,   -43,   118,     4,   -43,    96,   175,
     -43,    71,    -1,    -1,    67,    68,   -43,   -12,   652,    -1,
     124,   123,   924,   175,   -43,   364,   -11,   -35,    -1,    89,
      80,    -1,   -43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,   206,   110,    -1,   105,    55,    92,   -43,    -1,   147,
     396,   428,   146,   -43,   -43,   138,   684,    98,   234,   -43,
     -43,   789,    99,   128,   725,   -11,   -11,   -35,   -35,  1020,
     988,     8,     8,    51,    51,  1038,  1038,     8,     8,   956,
      90,   821,   100,   -43,   154,   460,   106,   -43,   136,   924,
      -1,   -43,   -43,   -43,    -1,    -1,   139,   130,    -1,   161,
     -43,   -43,   109,   159,    -6,   -43,    -1,   -43,   -43,   113,
     175,   492,   175,   175,   924,   757,   120,   111,   860,    -1,
      -1,   -43,   121,   100,   -43,   524,   175,   174,   131,   -43,
     -43,   -43,   -43,   177,   179,    -1,   924,    -5,   892,   -43,
     -43,   -43,   -43,   -43,   180,   -43,   -43,   556,   -43,    -1,
     129,   155,    -1,   -43,   924,   184,   187,   588,   -43,    -1,
     -43,   620,   -43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,   -43,   -43,   -43,   -43,   122,   -42,   126,    13,   -43,
     -43,   -43,   -43,   -43,   -43,    78,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -37,
     -43,   -43,     7,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      71,    81,   105,   106,   228,    63,    86,   119,    49,   124,
       3,    64,    88,    92,   120,    20,    65,    36,    50,   103,
     104,   105,   106,   203,   229,    87,    95,    96,    97,   111,
     112,   119,    52,   125,    84,    66,    37,   127,   120,    39,
      40,   204,    41,    67,    85,   130,   131,    42,    46,    53,
     119,   139,   136,    68,    54,    55,    56,   120,    57,    69,
      70,   141,   103,   104,   105,   106,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    58,    60,    20,   165,    59,    63,    61,
      89,   169,    62,   119,    64,    75,    78,    82,    80,    65,
     120,   103,   104,   105,   106,   107,   108,    83,    98,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    66,    94,
      90,    99,   100,   101,   123,   126,    67,   129,   132,   133,
     137,   138,   119,   191,    52,   142,    68,   194,   195,   120,
     143,   198,    91,    70,   164,   162,   166,    51,   208,   205,
     210,   211,   168,   170,     4,   173,   174,   180,   176,   179,
     186,   183,   216,   218,   222,   189,   188,   197,   196,   199,
     201,   202,   214,   207,     5,     6,     7,     8,   227,    72,
     213,   223,   219,     9,   225,     4,   232,   224,   226,   235,
     236,   238,   234,   239,    10,   237,    11,    12,   121,    13,
      14,    15,   241,   167,    17,     5,     6,     7,     8,   134,
     220,   163,     0,     0,     9,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,    11,    12,     0,
      13,    14,    15,     0,     0,    17,     5,     6,     7,     8,
      63,     0,     0,     0,     0,     9,    64,     0,     0,     0,
       0,    65,     0,     0,     0,     0,    10,     0,    11,    12,
       4,    13,    14,    15,     0,     0,    17,     0,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    67,     0,
       5,     6,     7,     8,     0,     0,     0,     0,    68,     9,
       0,     4,     0,     0,    69,   177,     0,     0,     0,     0,
      10,     0,    11,    12,     0,    13,    14,    15,     0,    16,
      17,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    11,    12,     0,    13,    14,    15,   102,
       0,    17,     0,   103,   104,   105,   106,   107,   108,     0,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,     0,     0,   119,   103,   104,   105,   106,   107,
     108,   120,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,   119,   103,   104,   105,
     106,   107,   108,   120,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,   119,   103,
     104,   105,   106,   107,   108,   120,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
     119,   103,   104,   105,   106,   107,   108,   120,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,   119,   103,   104,   105,   106,   107,   108,   120,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,   119,   103,   104,   105,   106,   107,
     108,   120,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,     0,   119,   103,   104,   105,
     106,   107,   108,   120,     0,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   240,     0,     0,   119,   103,
     104,   105,   106,   107,   108,   120,     0,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,     0,
     119,   103,   104,   105,   106,   107,   108,   120,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   119,   103,   104,   105,   106,   107,   108,   120,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   103,   104,   105,   106,   107,
     108,   120,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,   120,   181,   175,   103,   104,   105,   106,
     107,   108,     0,     0,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   212,   119,   103,   104,
     105,   106,   107,   108,   120,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     103,   104,   105,   106,   107,   108,   120,     0,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   103,   104,   105,   106,   107,   108,   120,     0,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   182,     0,     0,     0,     0,     0,
     120,   103,   104,   105,   106,   107,   108,     0,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   103,   104,   105,   106,   107,   108,   120,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   103,   104,   105,   106,   107,
     108,   120,     0,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   103,   104,   105,
     106,   107,   108,   120,     0,   109,   110,   111,   112,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   103,
     104,   105,   106,   107,     0,   120,     0,   109,   110,   111,
     112,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   103,   104,   105,   106,     0,     0,   120,     0,   109,
     110,   111,   112,   113,   114,   115,   116,     0,     0,   103,
     104,   105,   106,     0,     0,     0,     0,   109,   110,   111,
     112,     0,   119,   115,   116,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,   120
};

static const yytype_int16 yycheck[] =
{
      37,    43,    13,    14,     9,     6,    10,    42,     8,     5,
       0,    12,    49,    50,    49,     2,    17,     6,    18,    11,
      12,    13,    14,    29,    29,    29,    63,    64,    65,    21,
      22,    42,    19,    29,     8,    36,     6,    79,    49,     4,
       6,    47,    60,    44,    18,    82,    83,    60,    60,    10,
      42,    93,    89,    54,    10,    10,    10,    49,    10,    60,
      61,    98,    11,    12,    13,    14,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,    10,    10,    72,   123,    58,     6,    10,
       8,   128,    60,    42,    12,    40,    60,     6,    46,    17,
      49,    11,    12,    13,    14,    15,    16,     6,     6,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    36,     7,
      38,    45,     6,     8,     6,    29,    44,    56,    61,    61,
       6,     8,    42,   170,   121,    46,    54,   174,   175,    49,
      60,   178,    60,    61,    34,    48,    41,     3,   190,   186,
     192,   193,    60,     6,    10,     9,    18,    29,    60,    60,
       6,    61,   199,   200,   206,    29,    60,    37,    29,     8,
      61,    12,    61,    60,    30,    31,    32,    33,   215,     4,
      60,     7,    61,    39,     7,    10,     6,    56,     9,    60,
      35,     7,   229,     6,    50,   232,    52,    53,    72,    55,
      56,    57,   239,   125,    60,    30,    31,    32,    33,    87,
     203,     5,    -1,    -1,    39,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    -1,
      55,    56,    57,    -1,    -1,    60,    30,    31,    32,    33,
       6,    -1,    -1,    -1,    -1,    39,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      10,    55,    56,    57,    -1,    -1,    60,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    54,    39,
      -1,    10,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      50,    -1,    52,    53,    -1,    55,    56,    57,    -1,    59,
      60,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    -1,    55,    56,    57,     7,
      -1,    60,    -1,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    49,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    49,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    49,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    49,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    49,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    49,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    49,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    42,    11,
      12,    13,    14,    15,    16,    49,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      42,    11,    12,    13,    14,    15,    16,    49,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    42,    11,    12,    13,    14,    15,    16,    49,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    49,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,     9,    51,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    42,    11,    12,
      13,    14,    15,    16,    49,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      11,    12,    13,    14,    15,    16,    49,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    11,    12,    13,    14,    15,    16,    49,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      49,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    11,    12,    13,    14,    15,    16,    49,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    11,    12,    13,    14,    15,
      16,    49,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    11,    12,    13,
      14,    15,    16,    49,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    11,
      12,    13,    14,    15,    -1,    49,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    11,    12,    13,    14,    -1,    -1,    49,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    42,    25,    26,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    64,     0,    10,    30,    31,    32,    33,    39,
      50,    52,    53,    55,    56,    57,    59,    60,    65,    69,
      70,    71,    72,    75,    79,    83,    84,    86,    87,    88,
      90,    93,    96,    98,    99,   100,     6,     6,    80,     4,
       6,    60,    60,    97,    94,    91,    60,    66,    67,     8,
      18,     3,    70,    10,    10,    10,    10,    10,    10,    58,
      10,    10,    60,     6,    12,    17,    36,    44,    54,    60,
      61,   101,     4,    68,    70,    40,    76,    77,    60,    85,
      46,    68,     6,     6,     8,    18,    10,    29,   101,     8,
      38,    60,   101,    89,     7,   101,   101,   101,     6,    45,
       6,     8,     7,    11,    12,    13,    14,    15,    16,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    42,
      49,    69,    81,     6,     5,    29,    29,    68,    73,    56,
     101,   101,    61,    61,    67,     9,   101,     6,     8,    68,
       7,   101,    46,    60,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,    48,     5,    34,   101,    41,    77,    60,   101,
       6,     7,     7,     9,    18,    51,    60,    61,    29,    60,
      29,     9,    43,    61,   103,   104,     6,     7,    60,    29,
      74,   101,    95,    92,   101,   101,    29,    37,   101,     8,
     102,    61,    12,    29,    47,   101,    78,    60,    68,     7,
      68,    68,     9,    60,    61,    29,   101,   105,   101,    61,
     104,     7,    68,     7,    56,     7,     9,   101,     9,    29,
      29,    82,     6,     7,   101,    60,    35,   101,     7,     6,
       7,   101,     7
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
#line 201 "Acse.y"
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
#line 213 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 4:
#line 214 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 5:
#line 218 "Acse.y"
    {
                     /* update the program infos by adding new variables */
                     set_new_variables(program, (yyvsp[(1) - (3)].intval), (yyvsp[(2) - (3)].list));
                  ;}
    break;

  case 6:
#line 225 "Acse.y"
    {  /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].decl), -1);
                  ;}
    break;

  case 7:
#line 229 "Acse.y"
    {
                     /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement(NULL, (yyvsp[(1) - (1)].decl), -1);
                  ;}
    break;

  case 8:
#line 236 "Acse.y"
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[(1) - (3)].svalue), 0, 0, (yyvsp[(3) - (3)].intval));

               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            ;}
    break;

  case 9:
#line 245 "Acse.y"
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[(1) - (4)].svalue), 1, (yyvsp[(3) - (4)].intval), 0);

                  /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            ;}
    break;

  case 10:
#line 254 "Acse.y"
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[(1) - (1)].svalue), 0, 0, 0);
               
               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            ;}
    break;

  case 11:
#line 266 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 12:
#line 267 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 13:
#line 271 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 14:
#line 272 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 15:
#line 277 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 16:
#line 278 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 17:
#line 279 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 18:
#line 280 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 19:
#line 281 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 20:
#line 282 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 21:
#line 283 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 22:
#line 284 "Acse.y"
    { gen_nop_instruction(program); ;}
    break;

  case 23:
#line 290 "Acse.y"
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
#line 344 "Acse.y"
    { // $4
      (yyvsp[(1) - (3)].loop_decr_stmt).l_check = newLabel(program);
      gen_bt_instruction(program, (yyvsp[(1) - (3)].loop_decr_stmt).l_check, 0);

      (yyvsp[(1) - (3)].loop_decr_stmt).l_loop = assignNewLabel(program);
   ;}
    break;

  case 25:
#line 351 "Acse.y"
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
#line 367 "Acse.y"
    {
      gen_bne_instruction(program, (yyvsp[(1) - (11)].loop_decr_stmt).l_loop, 0);
      assignLabel(program, (yyvsp[(1) - (11)].loop_decr_stmt).l_exit);

      free((yyvsp[(2) - (11)].svalue));
   ;}
    break;

  case 27:
#line 377 "Acse.y"
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
#line 389 "Acse.y"
    {
               (yyval.intval) = (yyvsp[(1) - (3)].intval);
               gen_add_instruction(program, (yyval.intval), (yyval.intval), (yyvsp[(3) - (3)].intval), CG_DIRECT_ALL);
            ;}
    break;

  case 29:
#line 395 "Acse.y"
    {
               (yyval.intval) = (yyvsp[(1) - (1)].intval);
            ;}
    break;

  case 30:
#line 402 "Acse.y"
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
#line 426 "Acse.y"
    { 
               assignLabel(program, (yyvsp[(1) - (6)].when_stmt).bypass);
               (yyval.intval) = (yyvsp[(1) - (6)].when_stmt).reg;
            ;}
    break;

  case 32:
#line 434 "Acse.y"
    {
                        (yyvsp[(1) - (1)].iterate_stmt).i_reg = gen_load_immediate(program, 0);
                        (yyvsp[(1) - (1)].iterate_stmt).c_reg = getNewRegister(program);

                        (yyvsp[(1) - (1)].iterate_stmt).label_seed = newLabel(program);
                        gen_bt_instruction(program, (yyvsp[(1) - (1)].iterate_stmt).label_seed, 0);
                        (yyvsp[(1) - (1)].iterate_stmt).label_codeblock = assignNewLabel(program);
                     ;}
    break;

  case 33:
#line 442 "Acse.y"
    {
                        gen_addi_instruction(program, (yyvsp[(1) - (3)].iterate_stmt).i_reg, (yyvsp[(1) - (3)].iterate_stmt).i_reg, 1);
                        (yyvsp[(1) - (3)].iterate_stmt).label_condition = newLabel(program);
                        gen_bt_instruction(program, (yyvsp[(1) - (3)].iterate_stmt).label_condition, 0);
                        assignLabel(program, (yyvsp[(1) - (3)].iterate_stmt).label_seed);
                     ;}
    break;

  case 34:
#line 448 "Acse.y"
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
#line 460 "Acse.y"
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
#line 484 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 37:
#line 485 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 38:
#line 486 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 39:
#line 487 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 40:
#line 488 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 41:
#line 494 "Acse.y"
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

  case 42:
#line 509 "Acse.y"
    {
      gen_sub_instruction(program, REG_0, (yyvsp[(1) - (4)].converge_stmt).r_var, (yyvsp[(1) - (4)].converge_stmt).r_tmp, CG_DIRECT_ALL);
      gen_bne_instruction(program, (yyvsp[(1) - (4)].converge_stmt).l_loop, 0);
   ;}
    break;

  case 43:
#line 514 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 44:
#line 515 "Acse.y"
    { /* does nothing */ ;}
    break;

  case 45:
#line 519 "Acse.y"
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

  case 46:
#line 536 "Acse.y"
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

  case 47:
#line 566 "Acse.y"
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

  case 48:
#line 614 "Acse.y"
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

  case 49:
#line 672 "Acse.y"
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

  case 50:
#line 772 "Acse.y"
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[(1) - (1)].label));
               ;}
    break;

  case 51:
#line 777 "Acse.y"
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

  case 52:
#line 789 "Acse.y"
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[(2) - (4)].label));
               ;}
    break;

  case 53:
#line 796 "Acse.y"
    {
                  /* the label that points to the address where to jump if
                   * `exp' is not verified */
                  (yyvsp[(1) - (1)].label) = newLabel(program);
               ;}
    break;

  case 54:
#line 802 "Acse.y"
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

  case 55:
#line 812 "Acse.y"
    { (yyval.label) = (yyvsp[(1) - (7)].label); ;}
    break;

  case 56:
#line 816 "Acse.y"
    {
                     /* initialize the value of the non-terminal */
                     (yyvsp[(1) - (1)].while_stmt) = create_while_statement();

                     /* reserve and fix a new label */
                     (yyvsp[(1) - (1)].while_stmt).label_condition
                           = assignNewLabel(program);
                  ;}
    break;

  case 57:
#line 825 "Acse.y"
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

                     /* if `exp' returns FALSE, jump to the label 
                      * $1.label_end */
                     gen_beq_instruction (program, (yyvsp[(1) - (5)].while_stmt).label_end, 0);
                  ;}
    break;

  case 58:
#line 842 "Acse.y"
    {
                     /* jump to the beginning of the loop */
                     gen_bt_instruction
                           (program, (yyvsp[(1) - (7)].while_stmt).label_condition, 0);

                     /* fix the label `label_end' */
                     assignLabel(program, (yyvsp[(1) - (7)].while_stmt).label_end);
                  ;}
    break;

  case 59:
#line 853 "Acse.y"
    {
                        /* the label that points to the address where to jump if
                         * `exp' is not verified */
                        (yyvsp[(1) - (1)].label) = newLabel(program);
                        
                        /* fix the label */
                        assignLabel(program, (yyvsp[(1) - (1)].label));
                     ;}
    break;

  case 60:
#line 862 "Acse.y"
    {
                           if ((yyvsp[(6) - (7)].expr).expression_type == IMMEDIATE)
                               gen_load_immediate(program, (yyvsp[(6) - (7)].expr).value);
                           else
                               gen_andb_instruction(program, (yyvsp[(6) - (7)].expr).value,
                                   (yyvsp[(6) - (7)].expr).value, (yyvsp[(6) - (7)].expr).value, CG_DIRECT_ALL);

                           /* if `exp' returns TRUE, jump to the label $1 */
                           gen_bne_instruction (program, (yyvsp[(1) - (7)].label), 0);
                     ;}
    break;

  case 61:
#line 875 "Acse.y"
    {
               /* insert an HALT instruction */
               gen_halt_instruction(program);
            ;}
    break;

  case 62:
#line 882 "Acse.y"
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

  case 63:
#line 902 "Acse.y"
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

  case 64:
#line 919 "Acse.y"
    { (yyval.expr) = create_expression ((yyvsp[(1) - (1)].intval), IMMEDIATE); ;}
    break;

  case 65:
#line 920 "Acse.y"
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

  case 66:
#line 933 "Acse.y"
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

  case 67:
#line 946 "Acse.y"
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

  case 68:
#line 970 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ANDB); ;}
    break;

  case 69:
#line 971 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ORB); ;}
    break;

  case 70:
#line 972 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ADD); ;}
    break;

  case 71:
#line 973 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), SUB); ;}
    break;

  case 72:
#line 974 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), MUL); ;}
    break;

  case 73:
#line 975 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), DIV); ;}
    break;

  case 74:
#line 976 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _LT_); ;}
    break;

  case 75:
#line 977 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _GT_); ;}
    break;

  case 76:
#line 978 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _EQ_); ;}
    break;

  case 77:
#line 979 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _NOTEQ_); ;}
    break;

  case 78:
#line 980 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _LTEQ_); ;}
    break;

  case 79:
#line 981 "Acse.y"
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), _GTEQ_); ;}
    break;

  case 80:
#line 982 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), SHL); ;}
    break;

  case 81:
#line 983 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), SHR); ;}
    break;

  case 82:
#line 984 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ANDL); ;}
    break;

  case 83:
#line 985 "Acse.y"
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr), ORL); ;}
    break;

  case 84:
#line 986 "Acse.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 85:
#line 987 "Acse.y"
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

  case 86:
#line 1005 "Acse.y"
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

  case 87:
#line 1085 "Acse.y"
    { /* $5 */
      (yyvsp[(1) - (4)].invariant_stmt).begin_code = newLabel(program);
      gen_bt_instruction(program, (yyvsp[(1) - (4)].invariant_stmt).begin_code, 0);

      (yyvsp[(1) - (4)].invariant_stmt).eval_exp = assignNewLabel(program);
   ;}
    break;

  case 88:
#line 1090 "Acse.y"
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

  case 89:
#line 1144 "Acse.y"
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

  case 90:
#line 1164 "Acse.y"
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

  case 91:
#line 1197 "Acse.y"
    {
      (yyval.expr) = handle_bin_numeric_op(program,
               (yyvsp[(1) - (5)].expr),
               create_expression((yyvsp[(4) - (5)].intval), IMMEDIATE),
               ANDB);
   ;}
    break;

  case 92:
#line 1206 "Acse.y"
    {
         if (((yyvsp[(1) - (3)].intval) & (yyvsp[(3) - (3)].intval)) != 0) {
            yyerror("Ranges overlap!");
         }

         (yyval.intval) = (yyvsp[(1) - (3)].intval) | (yyvsp[(3) - (3)].intval);
      ;}
    break;

  case 93:
#line 1213 "Acse.y"
    {
         (yyval.intval) = (yyvsp[(1) - (1)].intval);
      ;}
    break;

  case 94:
#line 1221 "Acse.y"
    {
         if ((yyvsp[(1) - (3)].intval) > (yyvsp[(3) - (3)].intval) || (yyvsp[(1) - (3)].intval) < 0 || (yyvsp[(1) - (3)].intval) > 31 || (yyvsp[(3) - (3)].intval) < 0 || (yyvsp[(3) - (3)].intval) > 31) {
            yyerror("Range boundaries not ordered.");
         }

         int min = (yyvsp[(1) - (3)].intval), max = (yyvsp[(3) - (3)].intval);
         (yyval.intval) = ((1 << (max - min + 1)) - 1) << min;
      ;}
    break;

  case 95:
#line 1231 "Acse.y"
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

  case 96:
#line 1243 "Acse.y"
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
#line 3240 "obj/Acse.tab.c"
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


#line 1257 "Acse.y"

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

