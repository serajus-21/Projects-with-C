// fig02_04.c
// adding two integers - memory concepts
#include <stdio.h>

// function main begins program execution
int main(void) {
    int integer1 = 0; // to hold first number user enters
    int integer2 = 0; // to hold second number user enters

    printf("Enter first integer: "); // prompt
    scanf("%d", &integer1);          // read an integer

    printf("Enter second integer: "); // prompt
    scanf("%d", &integer2);           // read an integer

    // int sum = 0;               // variable to store total value
    // sum = integer1 + integer2; // assign total to sum

    // int sum = integer1+integer2; // fast-version

    printf("Sum is %d\n", integer1+integer2); //prints sum
} //end function main