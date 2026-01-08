#include <stdio.h>

int main() {

    FILE *fp;

    fp = fopen("myfile.txt", "w");   // file create + write mode

    if (fp == NULL) {
        printf("File open error");
        return 1;   // exit program
    }

    fprintf(fp, "hello");   // write to file

    fclose(fp);

    printf("File written successfully!");

    return 0;
}
