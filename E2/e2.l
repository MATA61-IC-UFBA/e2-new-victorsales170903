/* recognize tokens for the calculator */

%{
#include <stdio.h>
#include <stdlib.h>
#include "token.h"
int yylval;
%}


%%

[0-9]+      { yylval = atoi(yytext); return NUMBER; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return TIMES; }
"/"         { return DIV; }
\n          { return EOL; }
[ \t]       ; // Ignorar espaços em branco
.           { return ERROR; }

%%


