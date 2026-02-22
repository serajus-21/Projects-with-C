//sentinel-controlled.c

#include<stdio.h>
int main(void) {
    int grade = 0, counter = -1, total = 0; 
    //this approach doesn't fit for sentinel controlled iterations of grades
    //counter needs to set at '-1'
    //can cause maintenance & upgrade limitations, i.e. totalEntry.

    do {
        printf("%s", "Enter grade, -1 to stop: ");
        scanf("%d", &grade);
        counter += 1;
        total += grade;
    } while(grade != -1);

    if(counter == 0) {
        puts("No grades entered");
    } else {
        double classAverage = (double) total / counter;
        printf("Average: %.2f\n", classAverage);
    }
}