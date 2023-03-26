#include <stdio.h>
#include <string.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, max_idx = 0;
    float max_salary = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        // Update max salary
        if (emp[i].salary > max_salary) {
            max_salary = emp[i].salary;
            max_idx = i;
        }
    }

    printf("\nDetails of Employee with the highest salary:\n");
    printf("Employee number: %d\n", emp[max_idx].eno);
    printf("Employee name: %s\n", emp[max_idx].ename);
    printf("Salary: %.2f\n", emp[max_idx].salary);

    return 0;
}
