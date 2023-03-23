#include <stdio.h>

int tmp = 20;

void func(void);

int main(void) {
    printf("%d ", tmp);
    func();
    printf("%d ", tmp);
    return 0;
}

void func(void) {
    static int tmp = 10;
    printf("%d ", tmp);
}

