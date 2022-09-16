#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
uint32_t makeNBOC(uint32_t);
int main() {
     uint32_t num = makeNBOC(12345);
    assert(makeNBOC(12345) == 0x39300000);
    printf("test passed 0x%08x", num);
}