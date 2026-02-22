// main.c
// build time-mode selection

#include <stdio.h>
#include "header.h"

int main(void)
{
    int userInteger = 0;
    int fixedInteger = 10;

// #undef MODE

#ifdef MODE
    printf("Enter an integer: "); // prompt
    scanf("%d", &userInteger);    // input
    if (isEven(userInteger))
    { // check
        printf(evenMessage, userInteger);
    }
    else
    {
        printf(oddMessage, userInteger);
    }
#endif

#ifndef MODE
    if (isEven(fixedInteger))
    {
        printf(evenMessage, fixedInteger);
    }
    else
    {
        printf(oddMessage, fixedInteger);
    }
#endif
}