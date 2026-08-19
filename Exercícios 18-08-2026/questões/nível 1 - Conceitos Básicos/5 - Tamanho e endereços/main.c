#include "stdio.h"

int main () {
    int arr[5];

    printf("Endereço de memória da array: %p\n", &arr);
    for (int i = 0; i < 3; i++){
        printf("Endereço de memória armazenado na posição %d do array: %p\n", i, &arr[i]);
    }

    return 0;
}

// Não entendi o "Use sizeof para mostrar o tamanho de um int e confirme que os endereços diferem por esse valor."