#include "stdio.h"

int soma(int *arr, int n);

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };

    int sum = soma(arr, 5);

    printf("A soma dos elementos da array é: %d", sum);

    return 0;
}

int soma(int *arr, int n) {
    int acc = 0;
    int *p = arr;

    while (p != &arr[n])
    {
        acc += *p;
        p++;
    }

    return acc;
}
