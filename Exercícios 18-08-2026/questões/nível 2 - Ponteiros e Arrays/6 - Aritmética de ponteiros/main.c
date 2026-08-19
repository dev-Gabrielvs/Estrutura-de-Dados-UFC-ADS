#include "stdio.h"

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int *p = arr;

    for (int i = 0; i < 5; i++){
        printf("Valor do índice %d do array: %d\n", i, *(p+i));
    }

    printf("------------------------------\n");

    while (p != &arr[5]) {
        int i = 0;
        printf("Valor do índice %d do array: %d\n", i, *p);
        i++;
        p++;
    }

    return 0;
}