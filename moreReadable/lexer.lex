%{
#include "parser.tab.h"
%}

%%

[0-9]+      { yylval = atoi(yytext); return NUMBER; }
"-"         { return MINUS; }
"+"         { return PLUS; }
"*"         { return TIMES; }
"/"         { return DIVIDE; }
\n          { return EOL; }
[ \t]       { /* ignore whitespace */ }
[#].*\n       { /* ignore comments */ }
.           { printf("Unknown character: %s\n", yytext); }

%%
