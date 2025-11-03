#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int lines = 0, characters = 0, spaces = 0;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file! Make sure the file exists.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        characters++;           

        if(ch == '\n')
            lines++;          

        if(ch == ' ')
            spaces++;          
    }

    fclose(fp); 
    if(characters > 0 && ch != '\n')
        lines++;
    printf("\nFile Statistics:\n");
    printf("Number of characters: %d\n", characters);
    printf("Number of lines     : %d\n", lines);
    printf("Number of spaces    : %d\n", spaces);

    return 0;
}
