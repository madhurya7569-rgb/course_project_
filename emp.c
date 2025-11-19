#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
    float healthInsurance;
    float retirement;
} Employee;

float calculateBenefits(Employee emp) {
    return (emp.healthInsurance / 100 * emp.salary) +
           (emp.retirement / 100 * emp.salary);
}

void displayEmployee(Employee emp) {
    printf("\n-----------------------------\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Health Insurance: %.2f\n", emp.healthInsurance / 100 * emp.salary);
    printf("Retirement: %.2f\n", emp.retirement / 100 * emp.salary);
    printf("Total Benefits: %.2f\n", calculateBenefits(emp));
    printf("Net Salary After Deductions: %.2f\n", emp.salary - calculateBenefits(emp));
    printf("-----------------------------\n");
}

int main() {
    Employee employees[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n========= Employee Benefit Management =========\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Employee Details\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1: {
            printf("\nEnter Employee ID: ");
            scanf("%d", &employees[count].id);

            printf("Enter Name: ");
            scanf(" %[^\n]", employees[count].name);

            printf("Enter Salary: ");
            scanf("%f", &employees[count].salary);

            printf("Health Insurance (%%): ");
            scanf("%f", &employees[count].healthInsurance);

            printf("Retirement (%%): ");
            scanf("%f", &employees[count].retirement);

            count++;
            printf("Employee Added Successfully!\n");
            break;
        }

        case 2: {
            if (count == 0) {
                printf("\nNo Employees to Display.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    displayEmployee(employees[i]);
                }
            }
            break;
        }

        case 3: {
            int id, found = 0;
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    displayEmployee(employees[i]);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Employee Not Found.\n");
            break;
        }

        case 4: {
            int id, found = 0;
            printf("\nEnter Employee ID to Update: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", employees[i].name);

                    printf("Enter New Salary: ");
                    scanf("%f", &employees[i].salary);

                    printf("New Health Insurance (%%): ");
                    scanf("%f", &employees[i].healthInsurance);

                    printf("New Retirement (%%): ");
                    scanf("%f", &employees[i].retirement);

                    printf("Employee Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Employee Not Found.\n");
            break;
        }

        case 5: {
            int id, found = 0;
            printf("\nEnter Employee ID to Delete: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (employees[i].id == id) {
                    for (int j = i; j < count - 1; j++) {
                        employees[j] = employees[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Employee Deleted Successfully!\n");
                    break;
                }
            }
            if (!found)
                printf("Employee Not Found.\n");
            break;
        }

        case 6:
            printf("\nExiting Program...\n");
            exit(0);

        default:
            printf("Invalid Choice. Try Again.\n");
        }
    }

    return 0;
}