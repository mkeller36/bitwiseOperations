#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void main(){
    uint8_t i = 0x01;
    uint8_t j = 0x05;
    uint8_t k;
    k = i & j;
    printf("0x%02x \n",k);
}