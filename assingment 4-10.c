#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercase, uppercase;
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);
    uppercase = toupper(lowercase);
    printf("The uppercase equivalent of %c is %c.", lowercase, uppercase);
    return 0;
}