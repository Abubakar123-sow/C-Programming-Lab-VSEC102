#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp;
    FILE *fp;
    int choice;

    printf("=========================================\n");
    printf("   EMPLOYEE DATABASE (FILE HANDLING)     \n");
    printf("=========================================\n");

    while (1) {
        printf("\n1. Add Employee Record\n");
        printf("2. Display All Employee Records\n");
        printf("3. Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            fp = fopen("employee.txt", "a");
            if (fp == NULL) {
                printf("Error opening file!\n");
                break;
            }
            printf("Enter Employee ID: ");
            scanf("%d", &emp.id);
            printf("Enter Employee Name: ");
            scanf("%s", emp.name);
            printf("Enter Employee Salary: ");
            scanf("%f", &emp.salary);

            fprintf(fp, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
            fclose(fp);
            printf("Employee record added successfully!\n");
            break;

        case 2:
            fp = fopen("employee.txt", "r");
            if (fp == NULL) {
                printf("No employee records found!\n");
                break;
            }
            printf("\n--- Employee Records ---\n");
            printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
            printf("-----------------------------------------\n");
            while (fscanf(fp, "%d %s %f", &emp.id, emp.name, &emp.salary) == 3) {
                printf("%-10d %-20s %-10.2f\n", emp.id, emp.name, emp.salary);
            }
            fclose(fp);
            break;

        case 3:
            printf("Exiting Employee Database. Goodbye!\n");
            exit(0);

        default:
            printf("Invalid choice! Please choose 1, 2, or 3.\n");
        }
    }

    return 0;
}
