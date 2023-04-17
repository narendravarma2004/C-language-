#include <stdio.h>
#include <string.h>
Struct Employee {
    Int id;
    Char name[50];
    Char designation[50];
    Char department[50];
    Float salary;
};

Int main() {
    Struct Employee emp;
    Printf(“Enter employee ID: “);
    Scanf(“%d”, &emp.id);

    Printf(“Enter employee name: “);
    Scanf(“%s”, emp.name);

    Printf(“Enter employee designation: “);
    Scanf(“%s”, emp.designation);

    Printf(“Enter employee department: “);
    Scanf(“%s”, emp.department);

    Printf(“Enter employee salary: “);
    Scanf(“%f”, &emp.salary);
    Printf(“\nEmployee details:\n”);
    Printf(“ID: %d\n”, emp.id);
    Printf(“Name: %s\n”, emp.name);
    Printf(“Designation: %s\n”, emp.designation);
    Printf(“Department: %s\n”, emp.department);
    Printf(“Salary: %.2f\n”, emp.salary);

    Return 0;
}

