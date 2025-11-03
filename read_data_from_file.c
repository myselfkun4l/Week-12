#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file! Make sure 'students.txt' exists.\n");
        return 1;
    }

    printf("\nContents of the file:\n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp); 

    return 0;
}
