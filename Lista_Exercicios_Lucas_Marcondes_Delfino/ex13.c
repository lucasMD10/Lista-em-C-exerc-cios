/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 13
 * Descricao: Ordem de três números.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double a, b, c;
    printf("Tres numeros: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a < b && b < c) puts("Crescente");
    else if (a > b && b > c) puts("Decrescente");
    else puts("Sem ordem estrita crescente ou decrescente");
    return 0;
}
