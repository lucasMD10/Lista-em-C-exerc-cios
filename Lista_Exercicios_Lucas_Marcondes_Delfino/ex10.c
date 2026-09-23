/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 10
 * Descricao: Troco com moedas.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int troco;
    printf("Troco em centavos: ");
    if (scanf("%d", &troco) != 1 || troco < 0) return 1;
    int m25 = troco / 25;
    troco %= 25;
    int m10 = troco / 10;
    troco %= 10;
    int m5 = troco / 5;
    int m1 = troco % 5;
    printf("25: %d; 10: %d; 5: %d; 1: %d\n", m25, m10, m5, m1);
    printf("Total: %d moedas\n", m25 + m10 + m5 + m1);
    return 0;
}
