#include<stdio.h>
struct Employee {
    int id;
    char name [50];
    float salary;
};
void addEmployee() {
    struct Employee emp;
    FILE*fp = fopen ("employee.txt","a");
    printf("Enter Employee ID: \n");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: \n");
    scanf("%s", &emp.name);
    printf("Enter Employee Salary: \n");
    scanf("%f", &emp.salary);
    fprintf(fp, "%d %s %.2f\n", emp.id, emp.name, emp.salary);
    fclose(fp);
    printf("Employee added successfully!\n");
}
void displayEmployee() {
    struct Employee emp;
    FILE *fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("No employee data found.\n");
        return;
    }
    printf("\nEmployee List:\n");
    printf("-----------------------------\n");
    while (fscanf(fp, "%d %s %f", &emp.id, emp.name, &emp.salary) != EOF) {
        printf("ID: %d | Name: %s | Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    fclose(fp);
}
void searchEmployee() {
    int targetId;
    struct Employee emp;
    int found = 0;
    FILE *fp = fopen("employee.txt", "r");
    if (fp == NULL) {
        printf("No employee data found.\n");
        return;
    }
    printf("Enter Employee ID to search: \n");
    scanf("%d", &targetId);
    while (fscanf(fp, "%d %s %f", &emp.id, emp.name, &emp.salary) != EOF) {
        if (emp.id == targetId) {
            printf("\nEmployee Found:\n");
            printf("ID: %d | Name: %s | Salary: %.2f\n", emp.id, emp.name, emp.salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee not found.\n");
    }
    fclose(fp);
}
int main() {
    int choice = -1;
    while (choice != 4) {
        printf("\nPlease choose an operation:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployee();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
