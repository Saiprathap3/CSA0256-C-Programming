#include<stdio.h>

struct simp {
    int i;
    char city[20];
};

int main() {
    struct simp s1;
    printf("%s\n", s1.city);
    printf("%d\n", s1.i);
    return 0;
}