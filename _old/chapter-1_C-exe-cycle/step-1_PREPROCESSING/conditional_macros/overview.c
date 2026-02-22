// if...else.c

// #include<stdio.h>

#define buffer_size 1010
#define buffer_size2 1012
#define buffer_size3 1013

int main(void)
{
    // #if !defined(buffer_size)
    //     printf("buffer_size: %d", buffer_size);
    // #endif

    // #ifdef buffer_size
    // printf("buffer_size: %d", buffer_size);
    // #endif

    #undef buffer_size

#ifdef buffer_size
    printf("buffer_size: %d", buffer_size);
#elifdef buffer_size2
    printf("buffer_size: %d", buffer_size2);
#endif
}