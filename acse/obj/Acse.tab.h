/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 190 "obj/Acse.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

