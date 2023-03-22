#include <stdio.h>
#include <string.h>

typedef struct stu1 {
    char name1[7];
    char name2[7];
    double marks;
} STU1;

int main() {
    STU1 s1 = {"rohit", "kumar", 87.43};
    STU1 *p1 = &s1;
    char *p = memchr(p1, 'u', 2 * sizeof(char[6]));
    if (p != NULL) {
        printf("%s", p);
    }
    return 0;
}