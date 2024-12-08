#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define BITVALUE(X, N) (((X) >> (N)) & 0x1)

void printBitInfo(int x){
    printf("x = %d \n", x);

    int numBits = sizeof(x) * 8;
    for(uint8_t i = 0; i < numBits; i++){
        printf("%d",BITVALUE(x,(numBits-1)-i));
    }
    printf("\n");
}

void main(void){
    uint8_t x = 42;    /* 101010 or 0x2a*/

    printBitInfo(x);
    x = x | 0x1; /* Set bit one to one by useing OR */

    printBitInfo(x);
    
    x = x & ~0x8; /* Set bit 4 to zero using AND ~*/

    printBitInfo(x);

    x = x ^ 0x8; /* Toggle bit using XOR*/

    printBitInfo(x);

    x = x << 2; /* Left Shift */

    printBitInfo(x);

    x = x >> 2; /* Right Shift */

    printBitInfo(x);
}