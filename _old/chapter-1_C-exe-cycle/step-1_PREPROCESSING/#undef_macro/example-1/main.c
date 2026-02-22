#include<stdio.h>
#include "header.h"

int main(void) {
    // printf("%f\n", PI);
    // #undef PI
    // printf("%f\n", PI);

    int number=4;
    if (isEven(number)) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
}