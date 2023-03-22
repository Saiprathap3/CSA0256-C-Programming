#include<stdio.h>
int main()
{
    float c[] = {2.8, 3.4, 4, 6.7, 5};
    int j;
    float *p = c;
    float *q = c;
    for (j = 0; j < 5; j++) {
        printf(" %f ", *q);
        ++q;
    }
    for (j = 0; j < 5; j++) {
        printf(" %f ", *p);
        ++p;
    }
    return 0;
}