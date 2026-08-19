#include "stdio.h"

int main() {
    int x = 10;
    int *p;
    p = &x;

    printf("Valor da variável 'x': %d\n", x);
    printf("Endereço da variável 'x': %p\n", &x);

    printf("Valor do ponteiro 'p': %p\n", p);
    printf("Valor apontado pelo ponteiro 'p': %d\n", *p);

    return 0;
}

/*
As linhas 8~9 cuida da manipulação da variável da sua forma mais básica. Quando criamos uma variável com tipo qualquer, o compilador automaticamente busca por algum espaço na memória e reserva, caso a variável esteja apenas declarada, ou reserva e armazena dados, caso a variável seja iniciada.

Linha 8: Vai no endereço de memória da variável 'x' e busca pelo dado armazenado, número 10;
Linha 9: Busca apenas o endereço de memória da variável 'x'.
*/

/*
As linhas 11~12 cuida da manipulação da variável 'x' utilizando ponteiro 'p'. Nesse caso, o ponteiro 'p' é iniciado buscando pelo endereço de memória da variável 'x' e assume o controle da manipulação da variável.

Linha 11: Vai no endereço de memória do ponteiro 'p' e busca pelo dado armazenado, endereço da variável 'x';
Linha 12: Vai no endereço de memória da variável 'x' armazenada no ponteiro 'p' e busca pelo dado armazenado naquele endereço de memória, número 10.
*/