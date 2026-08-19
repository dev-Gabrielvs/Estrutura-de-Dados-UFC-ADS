#include "stdio.h"

int main() {
    int x = 10;
    int *p;
    p = &x;

    printf("Valor da variável 'x' pré-alteração: %d\n", x);

    *p = 25;

    printf("Valor da variável 'x' após alteração: %d", x);

    return 0;
}