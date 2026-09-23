/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 32
 * Descricao: Troca usando ponteiros.
 * Data: 22/09/2026
 */

#include <stdio.h>

void trocarValores(double *a, double *b) {
    double temporario = *a;
    *a = *b;
    *b = temporario;
}

int main(void) {
    double a, b;
    printf("Dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    trocarValores(&a, &b);
    printf("Depois da troca: a = %g, b = %g\n", a, b);
    return 0;
}
