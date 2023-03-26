#include <stdio.h>

struct person {
    char *name;
    int age;
    float height;
};

int main() {
    // create a person struct
    struct person john = {"John", 25, 1.75};

    // create a pointer to the person struct
    struct person *ptr = &john;

    // access and modify struct members using pointer
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Height: %.2f\n", ptr->height);

    // modify struct member using pointer
    ptr->age = 30;

    // access and modify struct members directly
    printf("Name: %s\n", john.name);
    printf("Age: %d\n", john.age);
    printf("Height: %.2f\n", john.height);

    return 0;
}
