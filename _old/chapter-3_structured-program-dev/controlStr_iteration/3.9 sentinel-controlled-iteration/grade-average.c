//grade-average.c

#include<stdio.h>
int main(void) {
    int counter = 0;
    int grade = 0;
    int total =0;

    printf("%s", "Enter grade, -1 to end: "); scanf("%d", &grade);

    while (grade != -1)
    {
        total += grade;
        counter += 1;

        printf("%s", "Enter grade, -1 to end: "); scanf("%d", &grade);
    }

    if(counter != 0) {
        double classAverage = (double) total / counter;
        printf("Average: %.2f\n", classAverage);
    } else
    {
        puts("Not enough input");
    }
    
    
}