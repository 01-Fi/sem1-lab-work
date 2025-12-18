//to read data from file
#include <stdio.h>
int main() {
    FILE *fp;
    char filename[50];
    char ch;
    printf("Enter the filename to read: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    printf("\n--- File Contents ---\n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    printf("\n\n--- End of File ---\n");
}

