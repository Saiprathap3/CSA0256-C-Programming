#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int N = sizeof(arr) / sizeof(int);
    int X = 30;

    int index = -1; 

    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            index = i;  
            break;      
        }
    }

    if (index == -1) {
        printf("%d not found in the array\n", X);
    } else {
        printf("%d found at index %d\n", X, index);
    }

    return 0;
}