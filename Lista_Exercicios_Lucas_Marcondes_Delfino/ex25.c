/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 25
 * Descricao: Dobro de um número.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int x, y;
    printf("Digite um numero: ");
    if (scanf("%d", &x) != 1) return 1;
    y = x * 2;
    printf("O dobro de %d eh %d\n", x, y);
    return 0;
}
