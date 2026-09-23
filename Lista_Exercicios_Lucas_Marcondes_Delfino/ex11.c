/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 11
 * Descricao: Conversão de reais para dólares.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double reais, taxa;
    printf("Valor em reais e cotacao (reais por dolar): ");
    if (scanf("%lf %lf", &reais, &taxa) != 2 || reais < 0 || taxa <= 0) {
        puts("Valores invalidos.");
        return 1;
    }
    printf("Dolares: %.2f\n", reais / taxa);
    return 0;
}
