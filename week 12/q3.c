//to  count the no. of lines, char, blank spaces from text file
#include<stdio.h>
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int lines = 0, spaces = 0, characters = 0;
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            lines++;
    }
    fclose(fp);
    printf("\n--- File Statistics ---\n");
    printf("Total characters : %d\n", characters);
    printf("Total blank spaces: %d\n", spaces);
    printf("Total lines      : %d\n", lines);
}


