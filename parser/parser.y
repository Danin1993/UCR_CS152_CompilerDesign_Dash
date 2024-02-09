%{

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

extern int yylex();
extern FILE* yyin;

void yyerror(const char* s);

int parCnt = 0;
%}

%locations 
%define api.value.type union
%define parse.error verbose
%define parse.lac full

%left SUBTRACTION ADD
%left MUTIPLY DIVIDE MOD
%left L_PAR R_PAR 
%left IDENTIFIER NUMBER

%token <double> NUMBER

%token RETURN RRETURN INT PRT FUNC WHILE IF ELSE BREAK CONTINUE READ SEMICOLON COMMA 
%token L_CURLY R_CURLY L_BRAKET R_BRAKET ASSIGNMENT LESS LESS_EQ GREATER GREATER_EQ EQUALITY NOT_EQ

%token UNKNOWN_TOKEN

%nterm <double> function_decleration statements statement paramerter_declerations pars  
%nterm <double> var_decleration var_assigment expression multiplicative_expr term varibles

%start function_declerations

%%
function_declerations  : function_declerations function_decleration {printf("function_declerations -> function_declerations function_decleration\n");}
                       | %empty                 {printf("functions -> epsilon\n");}
                       ;
statements	       : statements statement {printf("statements -> statemtnents statement\n");}
		       | %empty			{printf("statemtnents -> epsilon\n");}
		       ;
statement	       : var_decleration {printf("statement -> var_decleration\n");}
	               | var_assigment {printf("statement -> var_assigment\n");}
		       | print {printf("statement -> print\n");}
		       | SEMICOLON {printf("statement -> SEMICOLON\n");}
		       ;  
var_decleration        : INT IDENTIFIER {printf("var_decleration -> INT INDENTIFIER\n");} 
		       | INT L_BRAKET expression R_BRAKET IDENTIFIER {printf("var_decleration -> INT L_BRAKET expression R_BRAKET IDENTIFIER\n");} 
	               | INT var_assigment {printf("var_decleration -> INT var_assigment\n");}
		       ;
paramerter_declerations: paramerter_declerations paramerter_decleration {printf("paramerter_declerations -> paramerter_declerations paramerter_decleration\n");}
		       | %empty {printf("paramerter_declerations -> epsilon\n");}
                       ;
paramerter_decleration : IDENTIFIER {printf("paramerter_decleration -> IDENTIFIER\n");}
             	       | IDENTIFIER COMMA {printf("paramerter_decleration -> IDENTIFIER COMMA\n");}
		       | IDENTIFIER L_BRAKET R_BRAKET {printf("paramerter_decleration -> IDENTIFIER L_BRAKET R_BRAKET\n");}
            	       | IDENTIFIER L_BRAKET R_BRAKET COMMA {printf("paramerter_decleration -> IDENTIFIER L_BRAKET R_BRAKET COMMA\n");}
		       ; 
function_decleration   : FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY statements R_CURLY {printf("function_decleration -> FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY statements R_CURLY\n");};
var_assigment          : varibles ASSIGNMENT expression {printf("var_assigment -> varibles ASSIGNMENT expression\n");};
expression             : multiplicative_expr {printf("expression -> \n");}
		       | multiplicative_expr ADD multiplicative_expr {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
		       | multiplicative_expr SUBTRACTION multiplicative_expr {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
                       ;
multiplicative_expr    : term {printf("multiplicative_expr -> term\n");}
                       | term MOD term {printf("multiplicative_expr -> term MOD term\n");}
		       | term MUTIPLY term {printf("multiplicative_expr -> term MUTIPLY term\n");}
		       | term DIVIDE term {printf("multiplicative_expr -> term DIVIDE term\n");}
		       ;
term                   : L_PAR expression R_PAR {printf("term -> L_PAR expression R_PAR\n");}
		       | NUMBER {printf("term -> NUMBER\n");}
                       | IDENTIFIER L_PAR pars R_PAR {printf("term -> IDENTIFIER L_PAR pars R_PAR\n");}
		       | varibles {printf("term -> varibles\n");}
		       ;
pars                   : pars COMMA expression {printf("pars -> pars COMMA expressionn");}
		       | expression {printf("pars -> expression\n");}
                       | %empty {printf("pars -> epsillion\n");}
                       ;
varibles               : IDENTIFIER {printf("varibles -> IDENTIFIER\n");}
		       | IDENTIFIER L_BRAKET expression R_BRAKET {printf("varibles -> IDENTIFIER L_BRAKET expression R_BRAKE\nT");}
                       ;
print		       : PRT L_PAR expression R_PAR {printf("print -> PRT L_PAR expression R_PAR\n");};
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













