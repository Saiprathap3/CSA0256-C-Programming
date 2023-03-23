#include <stdio.h>

int main() {
  struct xx {
    int x;
    struct yy {
      char s;
      struct xx* p;
    } y;
    struct yy* q;
  };

  struct xx my_xx;
  struct yy my_yy;

  my_xx.x = 10;
  my_yy.s = 'a';
  my_yy.p = &my_xx;
  my_xx.q = &my_yy;

  printf("The value of x is: %d", my_xx.x);

  return 0;
}