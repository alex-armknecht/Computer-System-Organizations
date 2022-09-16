#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char binArr[32];
    int i;
    int userNum;
    int counter = 0;
    int numOfZeros = 0;

    printf("please enter a number to convert to binary: ");
    scanf("%d", &userNum); //put user input into userNum.
    for(i = 0; userNum > 0;  i++) {
        binArr[i] = (userNum % 2) +'0'; //mod by two to either get 0 or 1 in the correct place
        userNum = userNum / 2; // update userNum
        counter++;
    }
    numOfZeros = 32 - counter;
    printf("The binary is: ");
    for(i = 0; i < numOfZeros; i++) {
        printf("%c", '0'); //print zero buffer so that its 32 bit.
    }
    for(i = (i-1); i >= 0; i-- ){ 
        //itterate backwards through the array and print out each number.
        printf("%c", binArr[i]);

    }
    return 0;
}