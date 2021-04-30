%{
//-- don't change *any* of these: if you do, you'll break the compiler.
#include <algorithm>
#include <memory>
#include <cstring>
#include <cdk/compiler.h>
#include <cdk/types/types.h>
#include "ast/all.h"
#define LINE                         compiler->scanner()->lineno()
#define yylex()                      compiler->scanner()->scan()
#define yyerror(compiler, s)         compiler->scanner()->error(s)
//-- don't change *any* of these --- END!
%}

%parse-param {std::shared_ptr<cdk::compiler> compiler}

%union {
  //--- don't change *any* of these: if you do, you'll break the compiler.
  YYSTYPE() : type(cdk::primitive_type::create(0, cdk::TYPE_VOID)) {}
  ~YYSTYPE() {}
  YYSTYPE(const YYSTYPE &other) { *this = other; }
  YYSTYPE& operator=(const YYSTYPE &other) { type = other.type; return *this; }

  std::shared_ptr<cdk::basic_type> type;        /* expression type */
  //-- don't change *any* of these --- END!

  int                   i;	/* integer value */
  double                d;    /* double value*/
  std::string          *s;	/* symbol name or string literal */
  cdk::basic_node      *node; /* node pointer */
  cdk::sequence_node   *sequence;
  cdk::expression_node *expression; /* expression nodes */
  cdk::lvalue_node     *lvalue;
  std::vector<std::string> *ids;
  fir::block_node       *block;
  fir::body_node       *body;
};

%token<i> tINTEGER
%token<d> tFLOAT
%token<s> tSTRING tIDENTIFIER
%token<expression> tNULL
%token tNE tLE tGE tOR tAND tSIZEOF 
%token tRETURN tWRITE tWRITELN tARROW
%token tEXTERNAL
%token tTYPE_STRING tTYPE_INT tTYPE_FLOAT tVOID
%token tIF tTHEN tELSE
%token tWHILE tDO
%token tBREAK tCONTINUE tLEAVE tRESTART tFINALLY 

%nonassoc tIF
%nonassoc tELSE

%right '=' "->" t2SETAST t3SETAST
%left tGE tLE tEQ tNE tOR '>' '<' 
%left '+' '-' t3SETASF
%left '*' '/' '%'
%nonassoc tUNARY '@' t2SETASF
%right tUMINUS 

%type<s> string
%type<node> instruction declaration vardec argdec fundef fundec
%type<sequence> instructions optional_instructions file expressions optional_expressions optional_decs declarations argdecs
%type<expression> expression integer float optional_initializer literal 
%type<type> data_type
%type<lvalue> lvalue
%type<block> block
%type<body> body

%{
//-- The rules below will be included in yyparse, the main parsing function.
%}
%%

file         : /* empty */  { compiler->ast($$ = new cdk::sequence_node(LINE)); }
             | declarations { compiler->ast($$ = $1); }
             ;

declarations :              declaration { $$ = new cdk::sequence_node(LINE, $1); }
             | declarations declaration { $$ = new cdk::sequence_node(LINE, $2, $1); }
             ;


declaration  : vardec ';' { $$ = $1; }
             | fundec     { $$ = $1; }
             | fundef     { $$ = $1; }
             ;

optional_decs  : /* empty */         { $$ = nullptr; }
               | declarations        { $$ = $1; }
               ;

vardec       : data_type tEXTERNAL  tIDENTIFIER   optional_initializer { $$ = new fir::variable_declaration_node(LINE, tEXTERNAL,  $1, *$3, nullptr); }
             | data_type '*'  tIDENTIFIER         optional_initializer { $$ = new fir::variable_declaration_node(LINE, '*',  $1, *$3, $4); }
             | data_type  tIDENTIFIER             optional_initializer { $$ = new fir::variable_declaration_node(LINE, tEXTERNAL, $1, *$2, $3); }
             ;

data_type    : tTYPE_STRING                     { $$ = cdk::primitive_type::create(4, cdk::TYPE_STRING);  }
             | tTYPE_INT                        { $$ = cdk::primitive_type::create(4, cdk::TYPE_INT);     }
             | tTYPE_FLOAT                      { $$ = cdk::primitive_type::create(8, cdk::TYPE_DOUBLE);  }
             | '<' data_type '>'                { $$ = cdk::reference_type::create(4, $2); }
             | t2SETAST data_type t2SETASF      { $$ = cdk::reference_type::create(4, $2); }
             | t3SETAST data_type t3SETASF      { $$ = cdk::reference_type::create(4, nullptr); }
             ;
       
optional_initializer  : /* empty */         { $$ = nullptr; /* must be nullptr, not NIL */ }
                 | '=' expression      { $$ = $2; }
                 ;

fundec   :          data_type  tIDENTIFIER '(' argdecs ')' { $$ = new fir::function_declaration_node(LINE, tEXTERNAL, $1, *$2, $4); }
         | data_type tEXTERNAL tIDENTIFIER '(' argdecs ')' { $$ = new fir::function_declaration_node(LINE, '*',  $1, *$3, $5); }
         | data_type '*' tIDENTIFIER '(' argdecs ')' { $$ = new fir::function_declaration_node(LINE, '*',  $1, *$3, $5); }
         | tVOID  tIDENTIFIER '(' argdecs ')' { $$ = new fir::function_declaration_node(LINE, tEXTERNAL, *$2, $4); }
         | tVOID tEXTERNAL tIDENTIFIER '(' argdecs ')' { $$ = new fir::function_declaration_node(LINE, '*', *$3, $5); }
         | tVOID '*' tIDENTIFIER '(' argdecs ')' { $$ = new fir::function_declaration_node(LINE, '*', *$3, $5); }
         ;

fundef   : data_type  tIDENTIFIER '(' argdecs ')' tARROW literal { $$ = new fir::function_definition_node(LINE, tEXTERNAL,$1, *$2, $4, nullptr, new fir::return_node(LINE, $7)); }
         | data_type tEXTERNAL tIDENTIFIER '(' argdecs ')' tARROW literal { $$ = new fir::function_definition_node(LINE, '*',$1, *$3, $5, nullptr, new fir::return_node(LINE, $8)); }
         | data_type '*' tIDENTIFIER '(' argdecs ')' tARROW literal { $$ = new fir::function_definition_node(LINE, '*',$1, *$3, $5, nullptr, new fir::return_node(LINE, $8)); }
         | data_type  tIDENTIFIER '(' argdecs ')' tARROW literal body { $$ = new fir::function_definition_node(LINE, tEXTERNAL,$1, *$2, $4, $8, new fir::return_node(LINE, $7)); }
         | data_type tEXTERNAL tIDENTIFIER '(' argdecs ')' tARROW literal body { $$ = new fir::function_definition_node(LINE, '*',$1, *$3, $5, $9, new fir::return_node(LINE, $8)); }
         | data_type '*' tIDENTIFIER '(' argdecs ')' tARROW literal body { $$ = new fir::function_definition_node(LINE, '*',$1, *$3, $5, $9, new fir::return_node(LINE, $8)); }
         | tVOID  tIDENTIFIER '(' argdecs ')' body { $$ = new fir::function_definition_node(LINE, tEXTERNAL, *$2, $4, $6, nullptr); }
         | tVOID tEXTERNAL tIDENTIFIER '(' argdecs ')' body { $$ = new fir::function_definition_node(LINE, '*', *$3, $5, $7, nullptr); }
         | tVOID '*' tIDENTIFIER '(' argdecs ')' body { $$ = new fir::function_definition_node(LINE, '*', *$3, $5, $7, nullptr); }
         | data_type  tIDENTIFIER '(' argdecs ')' body { $$ = new fir::function_definition_node(LINE, tEXTERNAL,$1, *$2, $4, $6, nullptr); }
         | data_type tEXTERNAL tIDENTIFIER '(' argdecs ')' body { $$ = new fir::function_definition_node(LINE, '*',$1, *$3, $5, $7, nullptr); }
         | data_type '*' tIDENTIFIER '(' argdecs ')' body { $$ = new fir::function_definition_node(LINE, '*',$1, *$3, $5, $7, nullptr); }
         ;        

argdecs  : /* empty */         { $$ = new cdk::sequence_node(LINE);  }
         |             argdec  { $$ = new cdk::sequence_node(LINE, $1);     }
         | argdecs ',' argdec  { $$ = new cdk::sequence_node(LINE, $3, $1); }
         ;

argdec   : data_type tIDENTIFIER { $$ = new fir::variable_declaration_node(LINE, tEXTERNAL, $1, *$2, nullptr); }
         ;

body     : '@' block                    { $$ = new fir::body_node(LINE, $2, nullptr, nullptr); }
         | '@' block t2SETASF block         { $$ = new fir::body_node(LINE, $2, nullptr, $4); }
         | '@' block  block             { $$ = new fir::body_node(LINE, $2, $3, nullptr); }
         | '@' block block t2SETASF block   { $$ = new fir::body_node(LINE, $2, $3, $5); }
         | t2SETASF block                   { $$ = new fir::body_node(LINE, nullptr, nullptr, $2); }
         | block t2SETASF block             { $$ = new fir::body_node(LINE, nullptr, $1, $3); }
         | block                        { $$ = new fir::body_node(LINE, nullptr, $1, nullptr); }
         ;

block    : '{' optional_decs optional_instructions '}' { $$ = new fir::block_node(LINE, $2, $3); }
         ;

optional_instructions: /* empty */  { $$ = new cdk::sequence_node(LINE); }
                       | instructions { $$ = $1; }
                       ;

instructions    : instruction                { $$ = new cdk::sequence_node(LINE, $1);     }
                | instructions instruction   { $$ = new cdk::sequence_node(LINE, $2, $1); }
                ;

instruction     : expression ';'                                                            { $$ = new fir::evaluation_node(LINE, $1); }
                | tWRITE expressions ';'                                                    { $$ = new fir::write_node(LINE, $2, false); }
                | tWRITELN expressions ';'                                                  { $$ = new fir::write_node(LINE, $2, true); }
                | tLEAVE ';'                                                                { $$ = new fir::leave_node(LINE); }
                | tLEAVE expression ';'                                                     { $$ = new fir::leave_node(LINE, $2); }
                | tRESTART ';'                                                              { $$ = new fir::restart_node(LINE); }
                | tRESTART expression ';'                                                   { $$ = new fir::restart_node(LINE, $2); }   
                | tRETURN                                                                   { $$ = new fir::return_node(LINE, nullptr); }
                | tIF expression tTHEN instruction                                          { $$ = new fir::if_node(LINE, $2, $4); }
                | tIF expression tTHEN instruction tELSE instruction                        { $$ = new fir::if_else_node(LINE, $2, $4, $6); }
                | tWHILE expression tDO instruction                                         { $$ = new fir::while_node(LINE, $2, $4); }
                | tWHILE expression tDO instruction tFINALLY instruction                    { $$ = new fir::while_node(LINE, $2, $4, $6); }
                | block                                                                     { $$ = $1; }
                ;

lvalue          : tIDENTIFIER                                            { $$ = new cdk::variable_node(LINE, *$1); delete $1; }
                | lvalue '[' expression ']'                              { $$ = new fir::left_index_node(LINE, new cdk::rvalue_node(LINE, $1), $3); }
                | '(' expression ')' '[' expression ']'                  { $$ = new fir::left_index_node(LINE, $2, $5); }
                | tIDENTIFIER '(' optional_expressions ')' '[' expression ']' { $$ = new fir::left_index_node(LINE, new fir::function_call_node(LINE, *$1, $3), $6); }
                ;

expression      : literal                       { $$ = $1; }
                /* LEFT VALUES */
                | lvalue                        { $$ = new cdk::rvalue_node(LINE, $1); }
                /* ASSIGNMENTS */
                | lvalue '=' expression         { $$ = new cdk::assignment_node(LINE, $1, $3); }
                /* ARITHMETIC EXPRESSIONS */
                | expression '+' expression    { $$ = new cdk::add_node(LINE, $1, $3); }
                | expression '-' expression    { $$ = new cdk::sub_node(LINE, $1, $3); }
                | expression '*' expression    { $$ = new cdk::mul_node(LINE, $1, $3); }
                | expression '/' expression    { $$ = new cdk::div_node(LINE, $1, $3); }
                | expression '%' expression    { $$ = new cdk::mod_node(LINE, $1, $3); }
                /* LfirICAL EXPRESSIONS */
                | expression  '<' expression    { $$ = new cdk::lt_node(LINE, $1, $3); }
                | expression tLE  expression    { $$ = new cdk::le_node(LINE, $1, $3); }
                | expression tEQ  expression    { $$ = new cdk::eq_node(LINE, $1, $3); }
                | expression tGE  expression    { $$ = new cdk::ge_node(LINE, $1, $3); }
                | expression  '>' expression    { $$ = new cdk::gt_node(LINE, $1, $3); }
                | expression tNE  expression    { $$ = new cdk::ne_node(LINE, $1, $3); }
                /* LfirICAL EXPRESSIONS */
                | expression tAND  expression    { $$ = new cdk::and_node(LINE, $1, $3); }
                | expression tOR   expression    { $$ = new cdk::or_node (LINE, $1, $3); }
                /* UNARY EXPRESSION */
                | '-' expression %prec tUMINUS  { $$ = new cdk::neg_node(LINE, $2); }
                | '+' expression %prec tUMINUS  { $$ = $2; }
                | '~' expression                { $$ = new cdk::not_node(LINE, $2); }
                /* OTHER EXPRESSION */
                | tIDENTIFIER '(' optional_expressions ')'   { $$ = new fir::function_call_node(LINE, *$1, $3); delete $1; }
                | tSIZEOF '(' expression ')'   { $$ = new fir::sizeof_node(LINE, $3); }
                | '@'                      { $$ = new fir::read_node(LINE); }
                /* OTHER EXPRESSION */
                | '(' expression ')'            { $$ = $2; }
                | '[' expression ']'            { $$ = new fir::memory_node(LINE, $2); }
                | lvalue '?'                    { $$ = new fir::address_of_node(LINE, $1); }
                ;

optional_expressions : /* empty */         { $$ = new cdk::sequence_node(LINE); }
                     | expressions         { $$ = $1; }
                     ;

expressions     : expression                     { $$ = new cdk::sequence_node(LINE, $1);     }
                | expressions ',' expression     { $$ = new cdk::sequence_node(LINE, $3, $1); }
                ;

literal         : integer                      { $$ = $1;}
                | float                        { $$ = $1;}
                | string                       { $$ = new cdk::string_node(LINE, $1); }
                | tNULL                        { $$ = new fir :: null_node(LINE); }
                ;

integer         : tINTEGER                      { $$ = new cdk::integer_node(LINE, $1); };
float           : tFLOAT                        { $$ = new cdk::double_node(LINE, $1); };
string          : tSTRING                       { $$ = $1; }
                | string tSTRING                { $$ = $1; $$->append(*$2); delete $2; }
                ;

%%
