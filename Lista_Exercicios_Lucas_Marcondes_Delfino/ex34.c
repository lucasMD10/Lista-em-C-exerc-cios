/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 34
 * Descricao: Constante PI.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double raio;
    printf("Raio: ");
    if (scanf("%lf", &raio) != 1 || raio < 0) return 1;
    printf("Area: %.5f\n", PI * raio * raio);
    return 0;
}
