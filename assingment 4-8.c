#include <stdio.h>
#include <string.h>

struct Student {
    int number;
    char grade[2];
};

int main() {
    int numStudents;
    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];
    int numA = 0, numB = 0, numC = 0, numD = 0, numF = 0;

    for (int i = 0; i < numStudents; i++) {
        printf("Enter student %d number, grade: ", i+1);
        scanf("%d %s", &students[i].number, students[i].grade);

        // Increment the count for the appropriate grade
        if (strcmp(students[i].grade, "A") == 0) {
            numA++;
        } else if (strcmp(students[i].grade, "B") == 0) {
            numB++;
        } else if (strcmp(students[i].grade, "C") == 0) {
            numC++;
        } else if (strcmp(students[i].grade, "D") == 0) {
            numD++;
        } else if (strcmp(students[i].grade, "F") == 0) {
            numF++;
        }
    }

    for (int i = 0; i < numStudents; i++) {
        printf("Student %d details:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Grade: %s\n", students[i].grade);
        printf("Total no. A: %d, B: %d, C: %d, D: %d, F: %d\n", numA, numB, numC, numD, numF);
    }

    return 0;
}
