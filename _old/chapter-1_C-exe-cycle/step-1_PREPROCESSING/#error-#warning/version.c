//version.c

#define version 2

int main(void) {
    #if version < 3
    // #error At least VERSION 3.0 required
    #warning OLD VERSION
    #endif

    printf("Version %d", version);
}