#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    struct Employee emp = {101, "John Doe", 5000.00};

    // Declare a pointer to Employee structure
    struct Employee *ptr;

    // Assign the address of emp to ptr
    ptr = &emp;

    // Access members using the pointer and arrow operator
    printf("Employee number: %d\n", ptr->eno);
    printf("Employee name: %s\n", ptr->ename);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
