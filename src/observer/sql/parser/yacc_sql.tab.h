/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
enum yytokentype
{
  SEMICOLON = 258,
  CREATE = 259,
  DROP = 260,
  TABLE = 261,
  TABLES = 262,
  INDEX = 263,
  SELECT = 264,
  DESC = 265,
  SHOW = 266,
  SYNC = 267,
  INSERT = 268,
  DELETE = 269,
  UPDATE = 270,
  LBRACE = 271,
  RBRACE = 272,
  COMMA = 273,
  TRX_BEGIN = 274,
  TRX_COMMIT = 275,
  TRX_ROLLBACK = 276,
  INT_T = 277,
  STRING_T = 278,
  FLOAT_T = 279,
  HELP = 280,
  EXIT = 281,
  DOT = 282,
  INTO = 283,
  VALUES = 284,
  FROM = 285,
  WHERE = 286,
  AND = 287,
  SET = 288,
  ON = 289,
  LOAD = 290,
  DATA = 291,
  INFILE = 292,
  EQ = 293,
  LT = 294,
  GT = 295,
  LE = 296,
  GE = 297,
  NE = 298,
  NUMBER = 299,
  FLOAT = 300,
  ID = 301,
  PATH = 302,
  SSS = 303,
  STAR = 304,
  STRING_V = 305
};
#endif
/* Tokens.  */
#define SEMICOLON 258
#define CREATE 259
#define DROP 260
#define TABLE 261
#define TABLES 262
#define INDEX 263
#define SELECT 264
#define DESC 265
#define SHOW 266
#define SYNC 267
#define INSERT 268
#define DELETE 269
#define UPDATE 270
#define LBRACE 271
#define RBRACE 272
#define COMMA 273
#define TRX_BEGIN 274
#define TRX_COMMIT 275
#define TRX_ROLLBACK 276
#define INT_T 277
#define STRING_T 278
#define FLOAT_T 279
#define HELP 280
#define EXIT 281
#define DOT 282
#define INTO 283
#define VALUES 284
#define FROM 285
#define WHERE 286
#define AND 287
#define SET 288
#define ON 289
#define LOAD 290
#define DATA 291
#define INFILE 292
#define EQ 293
#define LT 294
#define GT 295
#define LE 296
#define GE 297
#define NE 298
#define NUMBER 299
#define FLOAT 300
#define ID 301
#define PATH 302
#define SSS 303
#define STAR 304
#define STRING_V 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 106 "yacc_sql.y"

  struct _Attr *attr;
  struct _Condition *condition1;
  struct _Value *value1;
  char *string;
  int number;
  float floats;
  char *position;

#line 167 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void *scanner);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
