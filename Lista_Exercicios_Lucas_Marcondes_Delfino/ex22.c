/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 22
 * Descricao: Análise de erro.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int numerador = 10, divisor = 0;
    if (divisor == 0) puts("Erro: divisao por zero.");
    else printf("O resultado e %d\n", numerador / divisor);
    return 0;
}
