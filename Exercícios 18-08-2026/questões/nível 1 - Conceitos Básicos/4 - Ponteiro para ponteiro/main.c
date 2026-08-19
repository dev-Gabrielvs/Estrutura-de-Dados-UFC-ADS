#include "stdio.h"

int main() {
    int v = 5;
    int *p = &v;
    int **pp = &p;

    printf("Valor da variável 'v': %d\n", v);
    printf("Valor apontado pelo ponteiro 'p': %d\n", *p);
    printf("Valor do ponteiro de ponteiro \"pp\": %p\n", pp);

    **pp = 9;

    printf("Valor da variável 'v' após alteração: %d\n", v);

    return 0;
}

/*
A declaração "int v = 5" registra o número 5 em um endereço de memória, que é registrado como valor do ponteiro 'p' em um outro endereço de memória, que é registrado como valor do ponteiro "pp".

- Variável 'v' tem: Valor próprio; Endereço próprio;
- Ponteiro 'p' tem: Endereço da variável 'v' como valor; Valor armazenado no endereço guardado como valor do ponteiro; Endereço próprio;
- Ponteiro "pp" tem: Endereço do ponteiro 'p' como valor; Valor armazenado no endereço da variável 'v', guardado no ponteiro 'p'; Endereço da variável 'v' armazenado pelo ponteiro 'p'; Endereço próprio.

Para fazer a troca do valor da variável 'v' através do ponteito "pp", o fluxo é:

Pega o endereço do ponteiro 'p' armazenado no ponteiro "pp" -> consulta valor armazenado no endereço do ponteiro 'p', retorna endereço da variável 'x' ->  altera valor armazenado no endereço apontado pelo ponteiro 'p'.

*/