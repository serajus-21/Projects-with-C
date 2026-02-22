//rectangle.c

#include<stdio.h>
int main(void) {
    

    for(int row=1; row<=4; row++) {
        for(int col=1; col<=5; col++) {
            printf("%s", "*");
        }
        printf("%s","\n");
    }
}