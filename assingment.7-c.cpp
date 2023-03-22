#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k;

    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print numbers
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}