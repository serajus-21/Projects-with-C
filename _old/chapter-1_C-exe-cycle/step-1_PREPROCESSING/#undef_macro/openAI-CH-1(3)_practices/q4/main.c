//main.c
#include <stdio.h>
#include "header.h"

int main(void) {
    printf("Main function\n");

    #undef CHECK_POSITIVE

    #ifdef CHECK_POSITIVE
    printf("%d\n", isPositive(22));
    #endif
}