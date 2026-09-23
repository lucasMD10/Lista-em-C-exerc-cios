/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 02
 * Descricao: Sequência de Fibonacci.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int n;
    unsigned long long anterior = 0, atual = 1;
    printf("Quantidade de termos (1 a 93): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 93) {
        puts("Quantidade invalida.");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%llu%s", atual, i == n - 1 ? "\n" : " ");
        if (i < n - 1) {
            unsigned long long proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
    }
    return 0;
}
