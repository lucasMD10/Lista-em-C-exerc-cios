/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 43
 * Descricao: Calculadora com caractere.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double a, b;
    char operacao;
    printf("Expressao (exemplo: 10 / 2): ");
    if (scanf("%lf %c %lf", &a, &operacao, &b) != 3) return 1;
    switch (operacao) {
        case '+': printf("Resultado: %g\n", a + b); break;
        case '-': printf("Resultado: %g\n", a - b); break;
        case '*': printf("Resultado: %g\n", a * b); break;
        case '/':
            if (b == 0) puts("Erro: divisao por zero.");
            else printf("Resultado: %g\n", a / b);
            break;
        default: puts("Operacao invalida.");
    }
    return 0;
}
