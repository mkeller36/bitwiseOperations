#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void main(void){
    /* Following along with https://youtu.be/ciio80nkjB8?si=kcyRGW0jXShW8r4A */
    /* How to access a single bit */

    uint32_t x = 42;    /* 101010 or 0x2a*/
    printf("x = %d \n", x);

    printf("bit 3 of x = %d \n", (x>>3) & 0x1); /*Shift bits right 3 */
    printf("bit 4 of x = %d \n", (x>>4) & 0x1);
}