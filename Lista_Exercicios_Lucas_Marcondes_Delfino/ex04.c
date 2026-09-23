/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 04
 * Descricao: Fila de banco.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int pessoas;
    printf("Pessoas na fila: ");
    if (scanf("%d", &pessoas) != 1 || pessoas < 0) return 1;
    for (int i = 0; i < pessoas; i++) printf("Senha %d\n", i + 1);
    return 0;
}
