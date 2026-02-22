// ro-precedence.c
// to observe relational operator precedence

#include <stdio.h>

int main(void)
{
    int a = 2, b = 3, c = 1;

    if(a>b == c<a) {
        printf("%d greater that %d\n", b,a);
    } else {
        printf("FALSE\n");
    }
}