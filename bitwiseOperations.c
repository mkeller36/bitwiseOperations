#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define BITVALUE(X, N) (((X) >> (N)) & 0x1)

void printBitInfo(int x){
    printf("x = %d \n", x);

    int numBits = sizeof(x) * 8;
    for(uint32_t i = 0; i < numBits; i++){
        printf("%d",BITVALUE(x,(numBits-1)-i));
    }
    printf("\n");
}

void main(void){
    uint8_t x = 42;    /* 101010 or 0x2a*/

    printBitInfo(x);
    x = x | 0x1; /* Set bit one to by useing OR */

    if(x & 0x1){ 
        printf("bit set sucessful!\n");
    }
    printBitInfo(x);
}