#include <stdio.h>

int main()
{
    int arr[100], i, n, max1, max2;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Find the largest element in the array */
    max1 = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    /* Find the second largest element in the array */
    max2 = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] != max1 && arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    printf("The largest two elements in the array are %d and %d", max1, max2);

    return 0;
}