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

SPACE     ([ ~t~r]|~n)
INT       [[:digit:]]+

LETTER  [A-Za-z_]
IDENTIFIER   {LETTER}({LETTER}|[[:digit:]])*

%x X_COMMENT
%x X_STRING  X_HEXA
%x X_OCTAL
%%
 {yydebug=1; set_debug(1);}

  /* ====================================================================== */
  /* ====[                      COMMENTS                              ]==== */
  /* ====================================================================== */

"!!".*$                      ; /* ignore comments */

"(*"                          yy_push_state(X_COMMENT);
<X_COMMENT>"*)"               yy_pop_state();
<X_COMMENT>.|"~n"               ; /* ignore content */

  /* ====================================================================== */
  /* ====[                  Tipos de dados                            ]==== */
  /* ====[                  Null pointers                             ]==== */
  /* ====================================================================== */

"void" 				           return tVOID;
"int"                    return tTYPE_INT;
"float"                  return tTYPE_FLOAT;
"string"                 return tTYPE_STRING;

"null"			             return tNULL;
"sizeof"                 return tSIZEOF;

  /* ====================================================================== */
  /* ====[                  Símbolos globais                          ]==== */
  /* ====================================================================== */

"?"                      return tEXTERNAL;

  /* ====================================================================== */
  /* ====[                 Instrução condicional                      ]==== */
  /* ====================================================================== */

"if"                          return tIF; 
"else"                        return tELSE; 
"then"				          return tTHEN;

  /* ====================================================================== */
  /* ====[                 Instrução de iteração                      ]==== */
  /* ====[                 Instrução de terminação                    ]==== */
  /* ====[                 Instrução de continuação                   ]==== */
  /* ====================================================================== */

"while"                       return tWHILE;
"do"                          return tDO;                           
"leave"			   	          return tLEAVE;
"restart"			          return tRESTART;
"return"			          return tRETURN;
"finally"                     return tFINALLY;

  /* ====================================================================== */
  /* ====[                 Operadores de expressões                   ]==== */
  /* ====================================================================== */

"=="                   return tEQ;
"!="                   return tNE;
"<="                   return tLE;
">="                   return tGE;
"&&"                   return tAND;
"||"                   return tOR;
"->"                   return tARROW;
">>"                   return t2SETASF;
"<<"                   return t2SETAST;
">>>"                  return t3SETASF;
"<<<"                  return t3SETAST;

  /* ====================================================================== */
  /* ====[              Delimitadores e separadores                   ]==== */
  /* ====[              Corpo (de função)                             ]==== */
  /* ====================================================================== */

"writeln"			                return tWRITELN;
"write"				                return tWRITE;

  /* ====================================================================== */
  /* ====[                   inteiros                                 ]==== */
  /* ====================================================================== */

<X_OCTAL>[[:digit:]]+      { yylval.i = strtoul(yytext, NULL, 8); yy_pop_state(); return tINTEGER; }
<X_OCTAL>.|\n               std::cerr << "WARNING: line " << lineno() << ": bad Octal data!" << std::endl; exit(1);

{INT}                  yylval.i = strtoul(yytext, NULL, 10); return tINTEGER;

  /* ====================================================================== */
  /* ====[                   float                                    ]==== */
  /* ====================================================================== */

([0-9]*\.[0-9]+|[0-9]+\.[0-9]*)([eE][-+]?[0-9]+)? { yylval.d = strtod(yytext, NULL); return tFLOAT; }

  /* ====================================================================== */
  /* ====[                Identificadores (nomes)                     ]==== */
  /* ====================================================================== */

{IDENTIFIER}  yylval.s = new std::string(yytext); return tIDENTIFIER;

  /* ====================================================================== */
  /* ====[              Cadeias de caracteres                         ]==== */
  /* ====================================================================== */

"'"                           yy_push_state(X_STRING);
<X_STRING>"~"                 yy_push_state(X_HEXA);
<X_STRING>"'"                 {
                                 yylval.s = new std::string(strlit.str());
                                 strlit.str("");
                                 yy_pop_state();
                                 return tSTRING;
                               }
<X_STRING>.                    strlit << *yytext;

<X_HEXA>"'"               strlit << "'"; yy_pop_state();
<X_HEXA>"0"               yy_pop_state();
<X_HEXA>n                 strlit << "~n"; yy_pop_state();
<X_HEXA>r                 strlit << "~r"; yy_pop_state();
<X_HEXA>t                 strlit << "~t"; yy_pop_state();
<X_HEXA>"~"               strlit << "~"; yy_pop_state();

<X_HEXA>[[:digit:]]{1,2} {
                                 strlit << (char)(unsigned char)strtoul(yytext, NULL, 16);
                                 yy_pop_state();
                               }
<X_HEXA>.                 strlit << *yytext; yy_pop_state();

  /* ====================================================================== */
  /* ====[                    (other characters)                      ]==== */
  /* ====================================================================== */

[-(){}\[\]<>=+*/%;,@~?\^]                return *yytext;
[[:space:]]         /* ignore remaining white space inside the program */
.                      yyerror(yytext);    /* all other chars: error! */

  /* ====================================================================== */
  /* ====[                           THE END                          ]==== */
  /* ====================================================================== */

%%
