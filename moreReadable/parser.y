%{
#include <stdio.h>
int yylex(void);
void yyerror(char *);
%}

%token NUMBER
%token PLUS MINUS TIMES DIVIDE EOL

%%
calculation: /* empty */
           | calculation line
           ;

line: expr EOL { printf("Result: %d\n", $1); }
    ;

expr: NUMBER                { $$ = $1; }
    | expr PLUS expr        { $$ = $1 + $3; }
    | expr MINUS expr       { $$ = $1 - $3; }
    | expr TIMES expr       { $$ = $1 * $3; }
    | expr DIVIDE expr      { $$ = $1 / $3; }
    ;

%%

void yyerror(char *s) {
  fprintf(stderr, "%s\n", s);
}

int main(void) {
  return yyparse();
}
