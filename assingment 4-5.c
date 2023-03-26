#include <stdio.h>
#include <string.h>

int main() {
    const char *ptr = "hello";
    char a[22];
    strcpy(a, "world");
    printf("%s %s\n", ptr, a);
    return 0;
}