/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 29
 * Descricao: Escopo de variáveis.
 * Data: 22/09/2026
 */

#include <stdio.h>

void mostrarLocal(void) {
    int x = 10;
    printf("x na funcao: %d\n", x);
}

int main(void) {
    int x = 5;
    mostrarLocal();
    printf("x no main: %d\n", x);
    return 0;
}
