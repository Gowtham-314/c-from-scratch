#include<stdio.h>
#include<conio.h>


struct Employee {
    int id;
    char name[50];
    float salary;
};

void printEmployee(struct Employee emp) {
    printf("Employee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
}
int main()
{
    struct Employee emp1;
    printf("Enter employee ID: ");
    scanf("%d", &emp1.id);
    printf("Enter employee name: ");
    scanf("%s", emp1.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp1.salary);

    printEmployee(emp1);
    return 0;
}