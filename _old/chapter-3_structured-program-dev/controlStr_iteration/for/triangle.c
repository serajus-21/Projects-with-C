//triangle.c

#include<stdio.h>
int main(void) {
    int tr = 5;
    int tc = 5;
    int rn = 0, cn = 0;

    for(rn = 0; rn <= tr; rn++) {
        for(cn = 0; cn<rn; cn++) {
            printf("%s", "*");
        }
        printf("%s","\n");
    }
}