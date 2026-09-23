/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 37
 * Descricao: Expressão com raiz quadrada.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a == 0) { puts("a deve ser diferente de zero."); return 1; }
    double delta = b * b - 4 * a * c;
    if (delta < 0) { puts("Nao ha resultado real."); return 0; }
    double x = (-b + sqrt(delta)) / (2 * a);
    printf("x = %.6f\n", x);
    return 0;
}
