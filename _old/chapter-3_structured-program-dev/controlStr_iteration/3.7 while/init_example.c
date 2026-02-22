//init_example.c

#include <stdio.h>
int main(void) {
    int product = 3;
    while (product <= 100)
    {
        product *= 3;
    }
    printf("product = %d\n", product);
    
}