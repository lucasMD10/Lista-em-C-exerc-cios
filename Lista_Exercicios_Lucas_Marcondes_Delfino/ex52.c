/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 52
 * Descricao: Ordenação sem arrays.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double a, b, c, auxiliar;
    printf("Tres numeros: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a > b) { auxiliar = a; a = b; b = auxiliar; }
    if (a > c) { auxiliar = a; a = c; c = auxiliar; }
    if (b > c) { auxiliar = b; b = c; c = auxiliar; }
    printf("Ordem crescente: %g %g %g\n", a, b, c);
    return 0;
}
