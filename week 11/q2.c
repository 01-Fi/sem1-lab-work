//rank wise arrange by bubble sort
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[100], temp;
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);   

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nRank-wise Student List:\n");
    printf("\nRank\tName\tRollNo\tMarks\n");
    printf("----------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t%.2f\n", i + 1, s[i].name, s[i].roll_no, s[i].marks);
    }
}

