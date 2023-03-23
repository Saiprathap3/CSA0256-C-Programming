#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, j, maxCount, currentCount;
    char maxChar, currentChar;

    printf("Enter any string: ");
    gets(str);

    maxChar = str[0];
    maxCount = 1;

    for(i = 0; i < strlen(str); i++)
    {
        currentChar = str[i];
        currentCount = 1;

        for(j = i + 1; j < strlen(str); j++)
        {
            if(currentChar == str[j])
            {
                currentCount++;
            }
        }

        if(currentCount > maxCount)
        {
            maxChar = currentChar;
            maxCount = currentCount;
        }
    }

    printf("The highest occurring character in the string is '%c' with frequency %d.\n", maxChar, maxCount);

    return 0;
}
