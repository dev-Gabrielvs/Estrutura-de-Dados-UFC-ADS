#include "stdio.h"

int main(){
    int a = 3;
    int b = 7;
    int aux;

    int *pA;
    int *pB;

    pA = &a;
    pB = &b;    

    printf("Valores pré-alteração: A = %d; B = %d\n", a, b);

    aux = *pA;
    *pA = *pB;
    *pB = aux;

    printf("Valores após alteração: A = %d; B = %d", a, b);

    return 0;
}