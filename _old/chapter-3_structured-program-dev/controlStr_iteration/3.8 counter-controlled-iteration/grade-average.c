//grade-average.c

/*
    set total to 0
    set counter to 1

    while counter is less than or equal to 10
        - get grade form user
        - add grade to total
        - increase counter by 1

    set the classAverage to total/10
    print classAverage
*/

#include<stdio.h>
int main(void) {
    int total = 0;
    int counter = 1;

    while (counter <= 10)
    {
        printf("%s", "Enter Grade: ");
        int grade = 0;
        scanf("%d", &grade);

        total += grade;
        counter += 1;
    }

    int classAverage = total/10;
    printf("Class Average: %d\n", classAverage);
    
}