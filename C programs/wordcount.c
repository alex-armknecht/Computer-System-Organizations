#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    char ch;
    FILE *file;
    int count = 0;
    file = fopen(argv[1], "r");

    while ((ch = fgetc(file)) != EOF ) {
        if (ch == ' ' || ch =='\n' || ch =='\t' || ch =='\v' || ch =='\f' || ch =='\r') {
            count++;
        }
    }
    printf("number of words present in given file: %d", count);
    return 0;
}
