#include<stdio.h>
int sqr(int x);

int main(void) {
    
    for(int i=1; i<=10; i++) {
        printf("%d ", sqr(i));
    }
    puts("");
}

int sqr(int x) {
    return x*x;
}