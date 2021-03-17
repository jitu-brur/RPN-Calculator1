#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <ctype.h>
#include "calc.h"

#define NUMBER '0' /* signal that a number was found */
#define BUFSIZE 100
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++]=f;
    else
        printf("error:stack full, cant push %g\n",f);
}

double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

