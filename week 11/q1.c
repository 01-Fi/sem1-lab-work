//to store the record of N st and print them
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char class_name[20];
    int roll_no;
    long enrollment_no;
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  

        printf("Class: ");
        scanf(" %[^\n]", s[i].class_name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enrollment No: ");
        scanf("%ld", &s[i].enrollment_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records:\n");
    printf("Name\t\tClass\tRoll No\tEnrollment No\tMarks\n");
    printf("____________________________________________________\n");

    for(i = 0; i < n; i++) {
        printf("%-15s %-10s %d\t%ld\t%.2f\n", 
               s[i].name, s[i].class_name, s[i].roll_no, s[i].enrollment_no, s[i].marks);
    }
}

 

