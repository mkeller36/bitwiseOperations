#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define BITVALUE(X, N) (((X) >> (N)) & 0x1)

void main(void){
    uint32_t x = 42;    /* 101010 or 0x2a*/
    printf("x = %d \n", x);

    int numBits = sizeof(x) * 8;
    for(uint32_t i = 0; i < numBits; i++){
        printf("%d",BITVALUE(x,(numBits-1)-i));
    }
    printf("\n");
    printf("You see a lot of leading zeros in this because we are working with a 32 bit number\n");

    uint8_t y = 42;
    numBits = sizeof(y) * 8;
    for(uint32_t i = 0; i < numBits; i++){
        printf("%d",BITVALUE(y,(numBits-1)-i));
    }
    printf("\n");
}