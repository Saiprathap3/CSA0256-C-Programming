#include <stdio.h>

int kthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[k - 1];
}

int main() {
    int arr[] = {3, 7, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int kth = kthSmallest(arr, n, k);

    printf("%dth smallest element is %d", k, kth);

    return 0;
}