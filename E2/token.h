/* token.h */
#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    NUMBER = 4,
    PLUS = 1,
    MINUS = 2,
    TIMES = 3,
    DIV = 5,
    EOL = 0,
    ERROR = 6
} Token;

#endif