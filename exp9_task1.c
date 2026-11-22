#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float total_marks;
};

int main()
{
    struct Student s[10];
    int n, i, topperIndex = 0;

    printf("=========================================\n");
    printf("  STUDENT RECORD & TOPPER FINDER (STRUCT)\n");
    printf("=========================================\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Total Marks: ");
        scanf("%f", &s[i].total_marks);

        if (s[i].total_marks > s[topperIndex].total_marks) {
            topperIndex = i;
        }
    }

    printf("\n=========================================\n");
    printf("               TOPPER DETAILS            \n");
    printf("=========================================\n");
    printf("Name        : %s\n", s[topperIndex].name);
    printf("Roll Number : %d\n", s[topperIndex].roll_no);
    printf("Total Marks : %.2f\n", s[topperIndex].total_marks);
    printf("=========================================\n");

    return 0;
}
