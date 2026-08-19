#include "stdio.h"

int main (){
    int arr[5] = { 10, 20, 50, 40, 30 };
    int *aux = arr;

    for (int i = 0; i < 5; i++){
        if (*aux < arr[i]){
            aux = &arr[i];
        }
    }

    printf("O maior número é %d, sob o endereço %p", *aux, aux);

    return 0;
}