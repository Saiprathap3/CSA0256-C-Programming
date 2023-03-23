#include <stdio.h>

void fun(int **p);

int main()
{
    int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0};
    int *ptr; // Change the type to int *
    ptr = (int *) &a[0][0]; // Cast to int *
    fun(ptr); // Pass the address of ptr
    return 0;
}

void fun(int **p)
{
    printf("%d\n", **p);
}
