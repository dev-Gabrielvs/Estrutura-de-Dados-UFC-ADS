#include "stdio.h"

int main () {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int *pS = &arr[0];
    int *pF = &arr[4];
    int aux = 0;

    while (pS <= pF){
        aux = *pS;
        *pS = *pF;
        *pF = aux;

        pS++;
        pF--;
    }

    for (int i = 0; i < 5; i++){
        printf("Valor do índice %d do array: %d\n", i, arr[i]);
    }

    return 0;
}