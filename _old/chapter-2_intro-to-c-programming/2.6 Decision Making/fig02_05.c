// fig02_05.c
// Using if statements, relational
// operators, and equality operators.

#include <stdio.h>

// function main begins program execution
int main(void)
{
    printf("Enter two integers & insha'Allah, I'll tell you\n");
    printf("the relationship they satisfy: ");

    int number1 = 0; // 1st variable definitions
    int number2 = 0; // 2nd variable definitions

    scanf("%d %d", &number1, &number2); // read two integers

    if (number1 == number2)
    {
        printf("%d is equal to %d\n", number1, number2);
    } // end if
    if (number1 != number2)
    {
        printf("%d is not equal to %d\n", number1, number2);
    } // end if
    if (number1 < number2)
    {
        printf("%d is less than %d\n", number1, number2);
    } // end if
    if (number1 > number2)
    {
        printf("%d is greater than %d\n", number1, number2);
    } // end if
    if (number1 <= number2)
    {
        printf("%d is less than or equal to %d\n", number1, number2);
    } // end if
    if (number1 >= number2)
    {
        printf("%d is greater than or equal to %d\n", number1, number2);
    } // end if
}