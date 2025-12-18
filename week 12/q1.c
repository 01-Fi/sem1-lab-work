// to create file and store info
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], class_name[20];
    int roll_no;
    char filename[50];
    printf("Enter the filename to create: ");
    scanf("%s", filename);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }
    printf("Enter student name: ");
    scanf(" %[^\n]", name);   
    printf("Enter class: ");
    scanf(" %[^\n]", class_name);
    printf("Enter roll number: ");
    scanf("%d", &roll_no);
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Class: %s\n", class_name);
    fprintf(fp, "Roll No: %d\n", roll_no);
    printf("\nInformation saved successfully in '%s'!\n", filename);
    fclose(fp);
}

