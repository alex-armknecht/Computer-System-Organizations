#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main() {
    int time1;
    int timeElap; 
    printf("This program will time how long you can hold your breath.");
    printf("\nTake a deep breath, then press the 'Enter' key.");
    printf("\nWhen you absolutely have to exhale, press the enter key again.");
    printf("\nThe duration will be displayed in minutes and seconds.\n");
    getchar(); //user presses key
    printf("\nEnter key is pressed start clock\n");
    time1 = (time(0));
    printf("Press enter key again to stop");
    fflush(stdout);
    fflush(stdin);
    getchar();
    timeElap = (time(0)-time1);
    printf("The elapsed time is %d seconds \n", timeElap); //only have to do seconds
    return 0;
}