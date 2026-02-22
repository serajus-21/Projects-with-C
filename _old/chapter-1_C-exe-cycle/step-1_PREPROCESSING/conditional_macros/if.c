//if.c

// #include<stdio.h>

#define sum (2+2)
#define sub (4-2)
#define mlt (3*4)

#undef sum
#undef sub


#define _printSUM printf("%d\n", sum)
#define _printSUB printf("%d\n", sub)
#define _printMLT printf("%d\n", mlt)

int main(void) {
    #if defined(sum)
        _printSUM;
    #elif !defined(sub)
        _printMLT;
    #endif
}