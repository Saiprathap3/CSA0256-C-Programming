#include <stdio.h>

int main() {
    int a = 130;
    char *ptr;
    ptr = (char *)&a;
    printf("%hhd\n", *ptr);
    return 0;
}