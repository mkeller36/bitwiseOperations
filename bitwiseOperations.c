#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#define BITVALUE(X, N) (((X) >> (N)) & 0x1)

void main(void){
    uint32_t x = 42;    /* 101010 or 0x2a*/
    printf("x = %d \n", x);

    printf("bit 3 of x = %d \n", BITVALUE(x,3)); /*Shift bits right 3 */
    printf("bit 4 of x = %d \n", BITVALUE(x,3));
}