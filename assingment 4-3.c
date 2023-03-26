#include<stdio.h>

struct zoho {
    int employees;
    char comp[5];

    struct founder {
        char ceo[10];
    } p;
};

int main() {
    struct zoho zs = {4000, "zoho", "Sridhar Vembu"};
    printf("%d %s %s", zs.employees, zs.comp, zs.p.ceo);
    return 0;
}