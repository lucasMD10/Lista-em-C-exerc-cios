/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 48
 * Descricao: Raízes da equação do segundo grau.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a == 0) { puts("Nao e equacao do segundo grau."); return 0; }
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        puts("Nao existem raizes reais.");
    } else if (delta == 0) {
        printf("Raiz dupla: %.6f\n", -b / (2 * a));
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.6f\nx2 = %.6f\n", x1, x2);
    }
    return 0;
}
