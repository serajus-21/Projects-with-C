// 3-5_3-6_if.c
// learn if...else conditional control structure

/*
1. get student's grade
2. check if grade is greater-than-equal-to 60 or not
    i. TRUE : print "passed"
    ii. FALSE : print "failed"
*/

#include <stdio.h>

int main(void)
{
    int grade = 0;                      // variable defintion - message to compiler
    printf("%s", "Enter your Grade: "); // prompt
    scanf("%d", &grade);

    // //------------ if...else ------------------
    // if (grade >= 60)
    // {
    //     printf("PASSED\n");
    // } // end if
    // else
    // {
    //     printf("FAILED\n");
    // } // end if

    // //------------ conditional operator => (condition) ? st1 : st2 ; ------------------
    // (grade >= 60) ? puts("passed\n") : puts("failed\n"); //compact
    puts((grade >= 60) ? "passed" : "failed"); // more compact
}