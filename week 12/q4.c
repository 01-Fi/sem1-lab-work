//to convert all the content in uppercase
#include <stdio.h>
#include <ctype.h> 
int main() {
    char filename[100];
    FILE *fp;
    int ch;
    printf("Enter the filename to convert to uppercase: ");
    scanf("%s", filename);
    fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        fseek(fp, -1, SEEK_CUR); 
        fputc(toupper(ch), fp);    
        fflush(fp);                
    }
    fclose(fp);
    printf("All content in '%s' has been converted to uppercase successfully!\n", filename);
}







