#include <stdio.h>

int main() {
    int python, c_prog, maths, physics;
    float total, aggregate;
    char grade[20];

    printf("Enter the marks in python: ");
    scanf("%d", &python);

    printf("Enter the marks in c programming: ");
    scanf("%d", &c_prog);

    printf("Enter the marks in Mathematics: ");
    scanf("%d", &maths);

    printf("Enter the marks in Physics: ");
    scanf("%d", &physics);

    total = python + c_prog + maths + physics;
    aggregate = total / 4.0;

    if (aggregate >= 75.0) {
        <cstrcpy>(grade, "DISTINCTION");
    }
    else if (aggregate >= 60.0 && aggregate < 75.0) {
        strcpy(grade, "FIRST DIVISION");
    }
    else if (aggregate >= 50.0 && aggregate < 60.0) {
        strcpy(grade, "SECOND DIVISION");
    }
    else if (aggregate >= 40.0 && aggregate < 50.0) {
        strcpy(grade, "THIRD DIVISION");
    }
    else {
        strcpy(grade, "FAIL");
    }

    printf("Total= %.0f\n", total);
    printf("Aggregate= %.1f\n", aggregate);
    printf("%s\n", grade);

    return 0;
}