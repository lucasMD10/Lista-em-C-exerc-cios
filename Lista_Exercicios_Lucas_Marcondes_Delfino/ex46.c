/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 46
 * Descricao: Fahrenheit para Celsius.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double fahrenheit, celsius;
    printf("Temperatura em Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) return 1;
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("Celsius: %.2f\n", celsius);
    return 0;
}
