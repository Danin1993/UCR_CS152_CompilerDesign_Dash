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

%nterm <double> function_decleration statements statement paramerter_declerations pars if_statement else_statement 
%nterm <double> var_decleration var_assigment expression multiplicative_expr term varibles comparitors bool_expression
%nterm <double> return_statement read_statement while_statement
%start function_declerations

%%

function_declerations  : function_declerations function_decleration {printf("function_declerations -> function_declerations function_decleration\n");}
                       | %empty                 {printf("functions -> epsilon\n");}
                       ;

function_decleration   : FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY statements R_CURLY {printf("function_decleration -> FUNC IDENTIFIER L_PAR paramerter_declerationsR_PAR L_CURLY statements R_CURLY\n");}
;

statements	       : statements statement {printf("statements -> statements statement\n");}
		       | %empty			{printf("statements -> epsilon\n");}
		       ;
statement	       : var_decleration SEMICOLON {printf("statement -> var_decleration SEMICOLON\n");}
	               | var_assigment SEMICOLON {printf("statement -> var_assigment SEMICOLON\n");}
		       | print SEMICOLON {printf("statement -> print  SEMICOLON\n");}
		       | if_statement {printf("statement -> if_statement\n");}
		       | return_statement SEMICOLON {printf("statement -> return_statement SEMICOLON\n");}
                       | read_statement SEMICOLON {printf("statement -> read_statement SEMICOLON\n");}
		       | while_statement {printf("statement -> while_statement\n");}
                       | BREAK SEMICOLON {printf("statement -> BREAK SEMICOLON\n");}
                       | CONTINUE SEMICOLON {printf("statement -> CONTINUE SEMICOLON\n");}
		       ;  

if_statement           : IF L_PAR bool_expression R_PAR L_CURLY statements R_CURLY else_statement {printf("if_statement -> IF L_PAR R_PAR L_CURLY statements R_CURLY else_statement\n");};
else_statement         : ELSE L_CURLY statements R_CURLY {printf("else_statement -> ELSE L_CURLY statements R_CURLY\n");}
		       | %empty {printf("else_statement -> epsilon\n");}

comparitors            : LESS {printf("comparitors -> LESS\n");}
		       | LESS_EQ {printf("comparitors -> LESS_EQ\n");}
		       | GREATER {printf("comparitors -> GREATER\n");}
                       | GREATER_EQ {printf("comparitors -> GREATER_EQ\n");}
                       | EQUALITY {printf("comparitors -> EQUALITY\n");} 
                       | NOT_EQ {printf("comparitors -> NOT_EQ\n");}
                       ;
return_statement       : RETURN expression {printf("return_statement -> RETURN expression\n");};
var_decleration        : INT IDENTIFIER {printf("var_decleration -> INT IDENTIFIER\n");} 
		       | INT L_BRAKET expression R_BRAKET IDENTIFIER {printf("var_decleration -> INT L_BRAKET expression R_BRAKET IDENTIFIER\n");} 
	               | INT var_assigment {printf("var_decleration -> INT var_assigment\n");}

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













