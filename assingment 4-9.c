#include <stdio.h>

int findHCF(int num1, int num2);

int main() {
    int num1, num2, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    hcf = findHCF(num1, num2);
    printf("The HCF of %d and %d is %d", num1, num2, hcf);
    return 0;
}

int findHCF(int num1, int num2) {
    int i, hcf;
    for(i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}
