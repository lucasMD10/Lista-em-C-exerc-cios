/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 53
 * Descricao: Ano bissexto.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int ano;
    printf("Ano: ");
    if (scanf("%d", &ano) != 1 || ano < 1) return 1;
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) puts("Bissexto");
    else puts("Nao bissexto");
    return 0;
}
