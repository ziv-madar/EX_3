#ifndef TXFIND
#include <ctype.h>
#define TXTFIND
#define LINE 256
#define MAX_LINES 250
#define OPTION_A "a"
#define OPTION_B "b"
#define WORD 30
#define MAX_ERROR 1
#define END_LINE '\n'
#define IS_END_WORD(A) isspace(A);
int getParagraph(char*buf);
#endif
