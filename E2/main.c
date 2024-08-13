/* main.c */
#include <stdio.h>
#include <stdlib.h>
#include "token.h"

extern int yylex();
extern char* yytext;

int main() {
    int token;

    while ((token = yylex()) != 0) {
        switch (token) {
            case PLUS:
                printf("Código do token: %d\n", token);
                break;
            case MINUS:
                printf("Código do token: %d\n", token);
                break;
            case TIMES:
                printf("Código do token: %d\n", token);
                break;
            case DIV:
                printf("Código do token: %d\n", token);
                break;
            case EOL:
                printf("Código do token: %d\n", token);
                break;
            case ERROR:
                printf("Código do token: %d\n", token);
                break;
            case NUMBER:
                printf("Constante decimal: %s\n", yytext);
                break;
        }
    }

    return 0;
}