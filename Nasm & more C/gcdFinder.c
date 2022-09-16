#include <assert.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdio.h>
uint32_t findGCD();
int main() {
    assert(findGCD() == 462837);
    printf("test passed");
    return 0;
}