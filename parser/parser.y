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

%nterm <double> function_decleration

%start functions

%%
functions  	       : functions function_decleration {printf("function -> functions function_decleration\n");}
                       | %empty                 {printf("functions -> epsilon\n");}
                       ;
paramerter_declerations: paramerter_declerations paramerter_decleration {printf("paramerter_declerations -> paramerter_declerations paramerter_decleration\n");}
		       | %empty {printf("paramerter_declerations -> epsilon\n");}
		       ;
paramerter_decleration : INT IDENTIFIER COMMA {printf("paramerter_decleration -> INT INDENTIFIER COMA\n");}
		       | INT IDENTIFIER L_BRAKET R_BRAKET COMMA {printf("paramerter_decleration -> INT INDENTIFIER L_BRAKET R_BRAKET COMA\n");}
		       | INT IDENTIFIER {printf("paramerter_decleration -> INT INDENTIFIER\n");}
		       | INT IDENTIFIER L_BRAKET R_BRAKET {printf("paramerter_decleration -> INT INDENTIFIER L_BRAKET R_BRAKET\n");}
		       ; 
function_decleration   : FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY R_CURLY {printf("functions -> FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY R_CURLY\n");};
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













