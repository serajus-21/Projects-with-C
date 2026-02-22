#include <stdio.h>

int maximum(int a, int b, int c);

int main(void)
{
    int a=0,b=0,c=0;
    scanf("%d %d %d", &a, &b, &c);
    int maxNum = maximum(a,b,c);
    printf("Max: %d\n", maxNum);
}

int maximum(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}