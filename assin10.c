#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void sort_names(char names[][MAX_NAME_LENGTH], int num_names, int ascending);

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int num_names, i;
    char order;

    printf("Enter number of names (max %d): ", MAX_NAMES);
    scanf("%d", &num_names);

    printf("Enter names:\n");
    for (i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter order (A for ascending, D for descending): ");
    scanf(" %c", &order);

    if (order == 'A' || order == 'a') {
        sort_names(names, num_names, 1); // ascending order
    } else if (order == 'D' || order == 'd') {
        sort_names(names, num_names, 0); // descending order
    } else {
        printf("Invalid order.\n");
        return 1;
    }

    printf("Sorted names:\n");
    for (i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

void sort_names(char names[][MAX_NAME_LENGTH], int num_names, int ascending) {
    int i, j;
    char temp[MAX_NAME_LENGTH];

    for (i = 0; i < num_names-1; i++) {
        for (j = i+1; j < num_names; j++) {
            if ((ascending && strcmp(names[i], names[j]) > 0) ||
                (!ascending && strcmp(names[i], names[j]) < 0)) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

