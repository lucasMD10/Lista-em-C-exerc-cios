/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 30
 * Descricao: Divisão real.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Dois inteiros: ");
    if (scanf("%d %d", &a, &b) != 2 || b == 0) {
        puts("Entrada invalida ou divisor zero.");
        return 1;
    }
    float resultado = (float) a / b;
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
