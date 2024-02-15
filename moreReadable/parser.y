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
%left FUNC 

%token <double> NUMBER

%token L_PAR R_PAR RETURN IDENTIFIER RRETURN INT PRT WHILE IF ELSE BREAK CONTINUE READ SEMICOLON COMMA 
%token L_CURLY R_CURLY L_BRAKET R_BRAKET ASSIGNMENT LESS LESS_EQ GREATER GREATER_EQ EQUALITY NOT_EQ

%token UNKNOWN_TOKEN

/*
%nterm <double> function_decleration paramerter_declerations paramerter_decleration statements statement 
%nterm <double> var_decleration var_assigment expression
*/

%start functions

%%

functions  	: %empty  {printf("functions -> epsilon\n");}
|             functions function_decleration {printf("functions -> functions function_decleration\n");}
;

function_decleration   : FUNC IDENTIFIER L_PAR R_PAR L_CURLY R_CURLY {printf("function_decleration -> FUNC IDENTIFIER L_PAR paramerter_declerationsR_PAR L_CURLY statements R_CURLY\n");	       };
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













