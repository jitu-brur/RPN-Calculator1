#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <ctype.h>
#include "calc.h"

#define NUMBER '0' /* signal that a number was found */
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
