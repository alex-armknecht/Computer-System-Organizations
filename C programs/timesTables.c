#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int i;
    int j;
    int userNum = 0;
    char * c = argv[1];
    if (argc != 2) {
        puts( "Exactly one argument needed"); 
        exit(0);
    } 
    userNum = atoi(argv[1]);
    for(i = 1; i <=userNum; i++) {
        for(j = 1; j <= userNum; j++) {
            printf("%d", j*i);
            if( (j*i) > 9 ) { //to make format look nice.
                printf("    ");
            }
            else {
                printf("     ");
            }

        }
        printf("\n");
    }

}