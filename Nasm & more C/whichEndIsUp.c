#include <stdio.h>
#include <stdint.h>
int main() {
    int x;
    char *pointer;
    x = 1;
    pointer = (char*)&x; //pointer to least significant bit in x
    printf("if the result is 1 then machine is little endian and if it is 0 then machine is big endian: \n");
    printf("%c\n",*pointer+48); //prints the ASCII representation of the character
    return *pointer+48;
}