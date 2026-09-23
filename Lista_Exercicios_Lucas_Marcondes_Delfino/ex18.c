/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 18
 * Descricao: Intervalo fechado.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double numero;
    printf("Numero: ");
    if (scanf("%lf", &numero) != 1) return 1;
    puts(numero >= 10 && numero <= 20 ? "Dentro do intervalo" : "Fora do intervalo");
    return 0;
}
