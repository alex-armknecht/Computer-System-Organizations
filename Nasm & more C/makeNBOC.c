#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <inttypes.h>

int notBigEndian() { //need to check if number is not big endian already.
    unsigned int num = 1;
    char* pointer = (char*)&num;
    if (pointer[0]){ //is little endian.
        return 1;
    }
    return 0; //is big endian
}

uint32_t makeNBOC(uint32_t x) {
    uint32_t swapped = x;
    if (notBigEndian()){ //is little endian so bits need to be swapped
        //convert bits to hex
        uint32_t bits1 = x & 0xFF;
        uint32_t bits2 = (x >> 8) & 0xFF;
        uint32_t bits3 = (x >> 16) & 0xFF;
        uint32_t bits4 = (x >> 24) & 0xFF;
        swapped = (bits1 << 24) | (bits2 << 16) | (bits3 << 8) | bits4; //swap the order of the bits
      }
    return swapped;
}
