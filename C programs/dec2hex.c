#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int numOfBits;
    printf("Please specify if you want the conversion in 32 or 64 bits ");
    scanf("%d", &numOfBits); //put user input into numOfBits.
    if (numOfBits != 32 || numOfBits != 64) {
        printf("must enter a a 32 or a 64 \n");
        printf("Please specify if you want the conversion in 32 or 64 bits ");
        scanf("%d", &numOfBits); //put user input into numOfBits.
    }
    if (numOfBits == 32) {
        numOfBits = 8;
    }
    if (numOfBits == 64) {
        numOfBits = 16;
    }


    char hexArr[numOfBits];
    int i;
    int userNum;
    int counter = 0;
    int numOfZeros = 0;
    int remainder;
    printf("please enter a number to convert to hexidecimal: ");
    scanf("%d", &userNum); //put user input into userNum.
    for(i = 0; userNum > 0;  i++) {
        remainder = userNum % 16;
        if (remainder < 10 ) { //remainder will be a hex number
            hexArr[i] = (remainder + '0');
            counter++;
        }
        else { //remainder will be a hex letter
            if (remainder == 10) {
                hexArr[i] = 'A';
                counter++;
            }
            if (remainder == 11) {
                hexArr[i] = 'B';
                counter++;
            }
            if (remainder == 12) {
                hexArr[i] = 'C';
                counter++;
            }
            if (remainder == 13) {
                hexArr[i] = 'D';
                counter++;
            }
            if (remainder == 14) {
                hexArr[i] = 'E';
                counter++;
            }
            if (remainder == 15) {
                hexArr[i] = 'F';
                counter++;
            }
        }
        userNum = userNum / 16; //update userNum. 
    }
    numOfZeros = numOfBits - counter;
    printf("The hexidecimal is: ");
    printf("Ox");
    for(i = 0; i < numOfZeros; i++) {
        printf("%c", '0'); //print zero buffer so that its enough bits.
    }
    for(i = (i-1); i >= 0; i-- ){ 
         //itterate backwards through the array and print out each number.
        printf("%c", hexArr[i]);
    }
    return 0;
}