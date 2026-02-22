// #include <stdio.h>

#define a 8

int main(void)
{
    int integer = 9;

#if a < 10
#error NOT_BIG_ENOUGH!
#endif

    return 0;
}