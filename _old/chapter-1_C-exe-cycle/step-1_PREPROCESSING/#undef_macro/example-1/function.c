#include "header.h"

#ifdef EVEN_NUMBER
int isEven(int n)
{
    return n%2 == 0;
}
#endif

#undef EVEN_NUMBER

#ifdef EVEN_NUMBER
int this_should_not_exist(int n) {
    return 1;
}
#endif