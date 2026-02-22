//main.c
//to test dynamic lib

#include<stdio.h>
#include "header.h"

int main(void) {
    int a=0, b=0;
    printf(_inputPrompt);
    scanf("%d %d", &a, &b);
    int sum = summation(a,b);
    int sub = subtraction(a,b);

    printf(_outputMessage, sum, sub);
}