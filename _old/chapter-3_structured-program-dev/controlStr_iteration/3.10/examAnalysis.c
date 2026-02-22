//examAnalysis.c

#include<stdio.h>
int main(void) {
    int student = 1, passes = 0, fails = 0;

    while (student <= 10)
    {
        printf("%s","Enter result (1. Pass | 2. Fail): ");
        int status = 0;
        scanf("%d", &status);

        if(status == 1) {
            passes += 1;
        } else {
            fails += 1;
        }

        student += 1;
    }

    printf("Passed: %d\n", passes);
    printf("Failed: %d\n", fails);

    if(passes > 8) {
        printf("%s", "Bonus to instructor\n");
    }
    
}