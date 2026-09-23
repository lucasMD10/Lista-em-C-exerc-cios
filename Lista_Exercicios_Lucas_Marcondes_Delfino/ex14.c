/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 14
 * Descricao: Operações booleanas.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int a, b;
    printf("A e B (0 ou 1): ");
    if (scanf("%d %d", &a, &b) != 2 ||
        (a != 0 && a != 1) || (b != 0 && b != 1)) return 1;
    printf("A && B = %d\n", a && b);
    printf("A || B = %d\n", a || b);
    printf("!A = %d\n", !a);
    printf("A ^ B = %d\n", a ^ b);
    return 0;
}
