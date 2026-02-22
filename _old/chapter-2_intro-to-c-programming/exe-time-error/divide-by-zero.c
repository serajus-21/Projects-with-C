// divide-by-zero.c

// fig02_04.c
// adding two integers - memory concepts
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int integer1 = 0; // to hold first number user enters
    int integer2 = 0; // to hold second number user enters

    printf("Enter first integer: "); // prompt
    scanf("%d", &integer1);          // read an integer

    printf("Enter second integer: "); // prompt
    scanf("%d", &integer2);           // read an integer

    int div = integer1 / integer2; // division
    printf("Div is: %d\n", div);   // prints div

    int sum = integer1 + integer2; // summation

    printf("Sum is %d\n", sum); // prints sum
} // end function main