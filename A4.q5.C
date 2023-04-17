#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 50
struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);

        printf("Employee No.: ");
        scanf("%d", &employees[i].eno);

        printf("Name: ");
        scanf("%s", employees[i].ename);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[max_index].salary) {
            max_index = i;
        }
    }
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee No.: %d\n", employees[max_index].eno);
    printf("Name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);

    return 0;
}
