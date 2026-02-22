// main.c

#include <stdio.h>
#include "header.h"

int main(void)
{
    int userInt1 = 0, userInt2 = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &userInt1, &userInt2);

    #undef OPERATION

#ifdef OPERATION
    printf(sumMessage, userInt1, userInt2, sum(userInt1,userInt2));
#endif

#ifndef OPERATION
    printf(mltMessage, userInt1, userInt2, mlt(userInt1, userInt2));
#endif
}