/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 06
 * Descricao: Soma de 1 a N.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    long long n, i = 1, soma = 0;
    printf("N (0 a 1000000): ");
    if (scanf("%lld", &n) != 1 || n < 0 || n > 1000000) return 1;
    while (i <= n) {
        soma += i;
        i++;
    }
    printf("Com while: %lld\n", soma);
    soma = n * (n + 1) / 2;
    printf("Com formula: %lld\n", soma);
    return 0;
}
