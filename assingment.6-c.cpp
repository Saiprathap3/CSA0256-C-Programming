#include<stdio.h>

void display(char *string);

int main()
{
    char string[] = "Hello World";
    display(string);
}

void display(char *string)
{
    printf("%s", string);
}