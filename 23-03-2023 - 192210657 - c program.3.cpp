#include <stdio.h>

int binary_search(int arr[], int n, int x) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {28, 12, 15, 122, 10, 33, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;
    int index = binary_search(arr, n, x);

    if (index == -1) {
        printf("Element not found.\n");
    }
    else {
        printf("Given element %d is found at %d th position.\n", x, index + 1);
    }

    return 0;
}