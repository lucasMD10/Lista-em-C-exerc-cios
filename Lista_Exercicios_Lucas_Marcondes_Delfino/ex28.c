/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 28
 * Descricao: Área e perímetro do círculo.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
    float raio;
    printf("Raio: ");
    if (scanf("%f", &raio) != 1 || raio < 0) return 1;
    printf("Area: %.2f\nPerimetro: %.2f\n", M_PI * raio * raio, 2 * M_PI * raio);
    return 0;
}
