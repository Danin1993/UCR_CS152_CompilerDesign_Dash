%{

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

extern int yylex();
extern FILE* yyin;
extern int yylineno;
int error_count = 0;

void yyerror(const char* s);

int parCnt = 0;

typedef struct Symbol {
    char* name;
    struct Symbol* next;
} Symbol;

Symbol* symbolTable = NULL;

Symbol* addSymbol(char* name) {
    Symbol* symbol = (Symbol*)malloc(sizeof(Symbol));
    symbol->name = strdup(name);
    symbol->next = symbolTable;
    symbolTable = symbol;
    return symbol;
}

Symbol* findSymbol(char* name) {
    for (Symbol* sym = symbolTable; sym != NULL; sym = sym->next) {
        if (strcmp(sym->name, name) == 0) {
            return sym;
        }
    }
    return NULL;
}
%}

%locations 
%define parse.error verbose
%define parse.lac full

%left SUBTRACTION ADD
%left MULTIPLY DIVIDE MOD
%left L_PAR R_PAR 


%union {
    char* sval;
    double dval;
}

%token <sval> IDENTIFIER
%token <dval> NUMBER 

%type <sval> var_decleration var_assigment
%type <dval> expression

%left '-' '+'
%left '*' '/'
%nonassoc LESS GREATER LESS_EQ GREATER_EQ EQUALITY NOT_EQ
%right ASSIGNMENT


%token RETURN RRETURN INT PRT FUNC WHILE IF ELSE BREAK CONTINUE READ SEMICOLON COMMA 
%token L_CURLY R_CURLY L_BRAKET R_BRAKET ASSIGNMENT LESS LESS_EQ GREATER GREATER_EQ EQUALITY NOT_EQ

%token UNKNOWN_TOKEN


%start function_declerations

%%
function_declerations  : function_declerations function_decleration {printf("function_declerations -> function_declerations function_decleration\n");}
                       | %empty                 {printf("functions -> epsilon\n");}
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
                       ;
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
		       ;
paramerter_declerations: paramerter_declerations paramerter_decleration {printf("paramerter_declerations -> paramerter_declerations paramerter_decleration\n");}
		       | %empty {printf("paramerter_declerations -> epsilon\n");}
                       ;
paramerter_decleration : INT IDENTIFIER {printf("paramerter_decleration -> INT IDENTIFIER\n");}
             	       | INT IDENTIFIER COMMA {printf("paramerter_decleration -> INT IDENTIFIER COMMA\n");}
		       | INT L_BRAKET R_BRAKET IDENTIFIER {printf("paramerter_decleration -> INT L_BRAKET R_BRAKET IDENTIFIER\n");}
            	       | INT L_BRAKET R_BRAKET IDENTIFIER COMMA {printf("paramerter_decleration -> INT L_BRAKET R_BRAKET IDENTIFIER COMMA\n");}
		       ; 
function_decleration   : FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY statements R_CURLY {printf("function_decleration -> FUNC IDENTIFIER L_PAR paramerter_declerations R_PAR L_CURLY statements R_CURLY\n");};
var_assigment          : varibles ASSIGNMENT expression {printf("var_assigment -> varibles ASSIGNMENT expression\n");};
expression             : multiplicative_expr {printf("expression -> multiplicative_expr\n");}
		       | multiplicative_expr ADD multiplicative_expr {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
		       | multiplicative_expr SUBTRACTION multiplicative_expr {printf("expression -> multiplicative_expr ADD multiplicative_expr\n");}
                       ;
bool_expression        : expression comparitors expression {printf("bool_expression -> expression comparitors expression \n");};
multiplicative_expr    : term {printf("multiplicative_expr -> term\n");}
                       | term MOD term {printf("multiplicative_expr -> term MOD term\n");}
		       | term MULTIPLY term {printf("multiplicative_expr -> term MULTIPLY term\n");}
		       | term DIVIDE term {printf("multiplicative_expr -> term DIVIDE term\n");}
		       ;
term                   : L_PAR expression R_PAR {printf("term -> L_PAR expression R_PAR\n");}
		       | NUMBER {printf("term -> NUMBER\n");}
                       | IDENTIFIER L_PAR pars R_PAR {printf("term -> IDENTIFIER L_PAR pars R_PAR\n");}
		       | varibles {printf("term -> varibles\n");}
		       ;
pars                   : pars COMMA expression {printf("pars -> pars COMMA expressionn");}
		       | expression {printf("pars -> expression\n");}
                       | %empty {printf("pars -> epsilon\n");}
                       ;
varibles               : IDENTIFIER {printf("varibles -> IDENTIFIER\n");}
		       | IDENTIFIER L_BRAKET expression R_BRAKET {printf("varibles -> IDENTIFIER L_BRAKET expression R_BRAKE\nT");}
                       ;
print		       : PRT L_PAR expression R_PAR {printf("print -> PRT L_PAR expression R_PAR\n");};
read_statement : READ L_PAR expression R_PAR {printf("read_statement -> READ L_PAR expression R_PAR\n");};
while_statement        : WHILE L_PAR bool_expression R_PAR L_CURLY statements R_CURLY {printf("while_statement -> WHILE L_PAR bool_expression R_PAR L_CURLY statements R_CURLY\n");};
var_decleration: INT IDENTIFIER {
    addSymbol($2);
    printf(". %s\n", $2);
}

var_assigment: IDENTIFIER ASSIGNMENT expression {
    if (!findSymbol($1)) {
        fprintf(stderr, "Error: undeclared variable %s\n", $1);
    } else {
        printf("= %s, %lf\n", $1, $3); 
    }
}

expression: expression ADD expression {
    $$ = $1 + $3;
}


%%

int main(int argc, char** argv) {
    yyin = stdin;

    if (argc >= 2) {
        FILE* file_ptr = fopen(argv[1], "r");
        if (file_ptr == NULL) {
            printf("Could not open file: %s\n", argv[1]);
            exit(1);
        }
        yyin = file_ptr;
    }

    yyparse();

    if (argc >= 2) {
        fclose(yyin);
    }

    if (error_count > 0) {
        fprintf(stderr, "Parsing finished with %d error(s).\n", error_count);
        return 1; 
    }

    return 0;
}

void yyerror(const char* s) {
    if (strcmp(s, "syntax error") == 0) {
        fprintf(stderr, "Syntax error at line %d: Unexpected token\n", yylineno);
    } else if (strcmp(s, "type error") == 0) {
        fprintf(stderr, "Type error at line %d: Incompatible types\n", yylineno);
    } else if (strcmp(s, "undeclared variable") == 0) {
        fprintf(stderr, "Error at line %d: Undeclared variable\n", yylineno);
    } else {
        fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
    }
    error_count++;
}













