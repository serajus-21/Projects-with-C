// main.c
#include <stdio.h>
#include "header.h"

int main(void)
{
    int userInteger = 0;
    printf(prompt);
    scanf("%d", &userInteger);

#undef USE_SQUARE

#ifdef USE_SQUARE
    printf(sqrOUTPUT, _sqr(userInteger));
#endif

#ifndef USE_SQUARE
    printf(qbOUTPUT, _qb(userInteger));
#endif
}