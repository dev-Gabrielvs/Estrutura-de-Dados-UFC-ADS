#include "stdio.h"

int main () {
    int x = 10;
    int y = 20;
    int z = 30;

    int *pX = &x;
    int *pY = &y;
    int *pZ = &z;
    int *arr[3] = { pX, pY, pZ };

    for (int i = 0; i < 3; i++){
        printf("Valor do índice %d do array: %d\n", i, *arr[i]);
    }

    return 0;
}