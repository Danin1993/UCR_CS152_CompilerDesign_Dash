%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
extern int yylex();
extern FILE* yyin;
extern int yylineno;
int error_count = 0;
void yyerror(const char* s);
int parCnt = 0;
%}

%locations 
%define api.value.type union
%define parse.error verbose
%define parse.lac full

%left SUBTRACTION ADD
%left MULTIPLY DIVIDE MOD
%left L_PAR R_PAR 
%left IDENTIFIER NUMBER

%token <double> NUMBER

%token RETURN RRETURN INT PRT FUNC WHILE IF ELSE BREAK CONTINUE READ SEMICOLON COMMA 
%token L_CURLY R_CURLY L_BRAKET R_BRAKET ASSIGNMENT LESS LESS_EQ GREATER GREATER_EQ EQUALITY NOT_EQ

%token UNKNOWN_TOKEN

%nterm <double> funcDec stms stm paramDecs pars if_stm else_stm 
%nterm <double> varDec var_assigment expr mult_expr term varibles compers bool_expr
%nterm <double> return_stm read_stm while_stm
%start funcDecs

%%

funcDecs  : funcDecs funcDec {printf("funcDecs -> funcDecs funcDec\n");}
          | %empty           {printf("functions -> epsilon\n");}
          ;

stms	    : stms stm          {printf("stms -> stms stm\n");}
		      | %empty			      {printf("stms -> epsilon\n");}
		      ;

stm	      : varDec SEMICOLON          {printf("stm -> varDec SEMICOLON\n");}
	        | var_assigment SEMICOLON   {printf("stm -> var_assigment SEMICOLON\n");}
		      | print SEMICOLON           {printf("stm -> print  SEMICOLON\n");}
		      | if_stm                    {printf("stm -> if_stm\n");}
		      | return_stm SEMICOLON      {printf("stm -> return_stm SEMICOLON\n");}
          | read_stm SEMICOLON        {printf("stm -> read_stm SEMICOLON\n");}
		      | while_stm                 {printf("stm -> while_stm\n");}
          | BREAK SEMICOLON           {printf("stm -> BREAK SEMICOLON\n");}
          | CONTINUE SEMICOLON        {printf("stm -> CONTINUE SEMICOLON\n");}
		      ;  

if_stm    : IF L_PAR bool_expr R_PAR L_CURLY stms R_CURLY else_stm  {printf("if_stm -> IF L_PAR R_PAR L_CURLY stms R_CURLY else_stm\n");};
else_stm  : ELSE L_CURLY stms R_CURLY                               {printf("else_stm -> ELSE L_CURLY stms R_CURLY\n");}
		      | %empty                                                  {printf("else_stm -> epsilon\n");}
          ;

compers   : LESS        {printf("compers -> LESS\n");}
		      | LESS_EQ     {printf("compers -> LESS_EQ\n");}
		      | GREATER     {printf("compers -> GREATER\n");}
          | GREATER_EQ  {printf("compers -> GREATER_EQ\n");}
          | EQUALITY    {printf("compers -> EQUALITY\n");} 
          | NOT_EQ      {printf("compers -> NOT_EQ\n");}
          ;

return_stm : RETURN expr {printf("return_stm -> RETURN expr\n");};

varDec     : INT IDENTIFIER                         {printf("varDec -> INT IDENTIFIER\n");} 
		       | INT L_BRAKET expr R_BRAKET IDENTIFIER  {printf("varDec -> INT L_BRAKET expr R_BRAKET IDENTIFIER\n");} 
	         | INT var_assigment                      {printf("varDec -> INT var_assigment\n");}
		       ;

paramDecs: paramDecs paramDec   {printf("paramDecs -> paramDecs paramDec\n");}
		       | %empty             {printf("paramDecs -> epsilon\n");}
           ;
           
paramDec   : INT IDENTIFIER                                   {printf("paramDec -> INT IDENTIFIER\n");}
           | INT IDENTIFIER COMMA paramDec                    {printf("paramDec -> INT IDENTIFIER COMMA paramDec\n");}
		       | INT L_BRAKET R_BRAKET IDENTIFIER                 {printf("paramDec -> INT L_BRAKET R_BRAKET IDENTIFIER\n");}
           | INT L_BRAKET R_BRAKET IDENTIFIER COMMA paramDec  {printf("paramDec -> INT L_BRAKET R_BRAKET IDENTIFIER COMMA paramDec\n");}
		       ; 

funcDec       : FUNC IDENTIFIER L_PAR paramDecs R_PAR L_CURLY stms R_CURLY {printf("funcDec -> FUNC IDENTIFIER L_PAR paramDecs R_PAR L_CURLY stms R_CURLY\n");};

var_assigment : varibles ASSIGNMENT expr          {printf("var_assigment -> varibles ASSIGNMENT expr\n");};

expr          : mult_expr                         {printf("expr -> mult_expr\n");}
		          | mult_expr ADD mult_expr           {printf("expr -> mult_expr ADD mult_expr\n");}
		          | mult_expr SUBTRACTION mult_expr   {printf("expr -> mult_expr ADD mult_expr\n");}
              ;

bool_expr     : expr compers expr   {printf("bool_expr -> expr compers expr \n");};

mult_expr     : term                {printf("mult_expr -> term\n");}
              | term MOD term       {printf("mult_expr -> term MOD term\n");}
		          | term MULTIPLY term  {printf("mult_expr -> term MULTIPLY term\n");}
		          | term DIVIDE term    {printf("mult_expr -> term DIVIDE term\n");}
		          ;

term          : L_PAR expr R_PAR {printf("term -> L_PAR expr R_PAR\n");}
		          | NUMBER {printf("term -> NUMBER\n");}
              | IDENTIFIER L_PAR pars R_PAR {printf("term -> IDENTIFIER L_PAR pars R_PAR\n");}
		          | varibles {printf("term -> varibles\n");}
		          ;

pars          : pars COMMA expr {printf("pars -> pars COMMA exprn");}
		          | expr {printf("pars -> expr\n");}
              | %empty {printf("pars -> epsilon\n");}
              ;

varibles      : IDENTIFIER {printf("varibles -> IDENTIFIER\n");}
		          | IDENTIFIER L_BRAKET expr R_BRAKET {printf("varibles -> IDENTIFIER L_BRAKET expr R_BRAKE\nT");}
              ;

print		      : PRT L_PAR expr R_PAR {printf("print -> PRT L_PAR expr R_PAR\n");};
read_stm      : READ L_PAR expr R_PAR {printf("read_stm -> READ L_PAR expr R_PAR\n");};
while_stm     : WHILE L_PAR bool_expr R_PAR L_CURLY stms R_CURLY {printf("while_stm -> WHILE L_PAR bool_expr R_PAR L_CURLY stms R_CURLY\n");};

%%


int main(int argc, char** argv){
	yyin = stdin;

	bool interaction =true;

	if(argc >= 2){
		FILE* file_ptr = fopen(argv[1], "r");
		if(file_ptr == NULL){
			printf("Could not open file: %s\n", argv[1]);
			exit(1);
		}
		yyin = file_ptr;
		interaction = false;
  	}

	return yyparse();
}

void yyerror(const char* s){
fprintf(stderr, "Error encountered while parsing token at [%i,%i-%i,%i]: %s\n", yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column, s);
 exit(1);
}













