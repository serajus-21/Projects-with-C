#include<stdio.h>
int main(void) {
    int number = 0, sum = 0;

    do
    {
        printf("Enter number: "); scanf("%d", &number);
        if(number > 0) {
            sum += number;
        }
    } while (number>0);
    
    printf("sum = %d\n", sum);
}