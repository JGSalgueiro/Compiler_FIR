%option c++ prefix="fir_scanner_" outfile="fir_scanner.cpp"
%option stack noyywrap yylineno 8bit debug
%{ 
// make relevant includes before including the parser's tab file
#include <string>
#include <cstring>
#include <sstream>
#include <cdk/ast/sequence_node.h>
#include <cdk/ast/expression_node.h>
#include <cdk/ast/lvalue_node.h>
#include "fir_parser.tab.h"

static std::vector<int> deferred;
// String literals
static std::ostringstream strlit;
// don't change this
#define yyerror LexerError
%}

SPACE      ([ ~t~r]|~n)
INT        [[:digit:]]+

LETTER  [A-Za-z_]
IDENTIFIER   {LETTER}({LETTER}|[[:digit:]])*

%x X_COMMENT
%x X_STRING  X_HEXADECIMAL X_OCTAL
%%
 {yydebug=1; set_debug(1);}

  /* +==================+ */
  /* |    Comments      |*/
  /* +==================+ */

"!!".*$                    ;/* ignore comments */
"(*"                       yy_push_state(X_COMMENT);
<X_COMMENT>"*)"            yy_pop_state();
<X_COMMENT>.|"~n"          ;/* ignore content */

  /* +==================+ */
  /* |  Global Symbols  |*/
  /* +==================+ */

"?"                        return tEXTERNAL;

  /* +=======================+ */
  /* |  conditional Instruc  | */
  /* +=======================+ */

"else"                     return tELSE;
"if"                       return tIF;  
"then"				             return tTHEN;

  /* +=======================+ */
  /* |  Data Types           | */
  /* |  Null Pointer         | */
  /* +=======================+ */

"float"                    return tTYPE_FLOAT;
"string"                   return tTYPE_STRING;
"void" 				             return tVOID;
"int"                      return tTYPE_INT;
"sizeof"                   return tSIZEOF;
"null"			               return tNULL;


  /* +=======================+ */
  /* |  Iterating Instruc    | */
  /* |  Terminating Instruc  | */
  /* |  Continuation Instruc | */
  /* +=======================+ */

"leave"			   	           return tLEAVE;
"restart"			             return tRESTART;
"return"			             return tRETURN;
"while"                    return tWHILE;
"do"                       return tDO;                           
"finally"                  return tFINALLY;

  /* +=======================+ */
  /* |  Separators           | */
  /* |  Body                 | */
  /* +=======================+ */

"write"				                return tWRITE;
"writeln"			                return tWRITELN;

  /* +=======================+ */
  /* |  Ops Expressions      | */
  /* +=======================+ */

">>"                   return t2SETASF;
"<<"                   return t2SETAST;
">>>"                  return t3SETASF;
"<<<"                  return t3SETAST;
"<="                   return tLE;
">="                   return tGE;
"=="                   return tEQ;
"!="                   return tNE;
"&&"                   return tAND;
"||"                   return tOR;
"->"                   return tARROW;

  /* +=======================+ */
  /* |  Integers             | */
  /* +=======================+ */

<X_OCTAL>[[:digit:]]+      { yylval.i = strtoul(yytext, NULL, 8); yy_pop_state(); return tINTEGER; }
<X_OCTAL>.|\n               std::cerr << "WARNING: line " << lineno() << ": bad Octal data!" << std::endl; exit(1);
{INT}                  yylval.i = strtoul(yytext, NULL, 10); return tINTEGER;

  /* +=======================+ */
  /* |  Float                | */
  /* +=======================+ */

([0-9]*\.[0-9]+|[0-9]+\.[0-9]*)([eE][-+]?[0-9]+)? { yylval.d = strtod(yytext, NULL); return tFLOAT; }

  /* +=======================+ */
  /* |  caracters chain      | */
  /* +=======================+ */

"'"                           yy_push_state(X_STRING);
<X_STRING>"~"                 yy_push_state(X_HEXADECIMAL);
<X_STRING>"'"                 {
                                 yylval.s = new std::string(strlit.str());
                                 strlit.str("");
                                 yy_pop_state();
                                 return tSTRING;
                               }
<X_STRING>.                    strlit << *yytext;
<X_HEXADECIMAL>"'"               strlit << "'"; yy_pop_state();
<X_HEXADECIMAL>"0"               yy_pop_state();
<X_HEXADECIMAL>n                 strlit << "~n"; yy_pop_state();
<X_HEXADECIMAL>r                 strlit << "~r"; yy_pop_state();
<X_HEXADECIMAL>t                 strlit << "~t"; yy_pop_state();
<X_HEXADECIMAL>"~"               strlit << "~"; yy_pop_state();
<X_HEXADECIMAL>[[:digit:]]{1,2} {
                                 strlit << (char)(unsigned char)strtoul(yytext, NULL, 16);
                                 yy_pop_state();
                               }
<X_HEXADECIMAL>.                 strlit << *yytext; yy_pop_state();

  /* +=======================+ */
  /* |  Ids                  | */
  /* +=======================+ */

{IDENTIFIER}  yylval.s = new std::string(yytext); return tIDENTIFIER;


  /* +=======================+ */
  /* |  other chars          | */
  /* +=======================+ */

[-(){}\[\]<>=+*/%;,@~?\^]                return *yytext;
[[:space:]]         /* ignore remaining white space inside the program */
.                      yyerror(yytext);    /* all other chars: error! */

%%
