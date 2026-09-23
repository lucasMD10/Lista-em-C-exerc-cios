/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 55
 * Descricao: Menu de operações.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int opcao;
    double a, b;
    puts("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao");
    printf("Opcao: ");
    if (scanf("%d", &opcao) != 1) return 1;
    if (opcao < 1 || opcao > 4) { puts("Opcao invalida."); return 1; }
    printf("Dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    switch (opcao) {
        case 1: printf("Resultado: %g\n", a + b); break;
        case 2: printf("Resultado: %g\n", a - b); break;
        case 3: printf("Resultado: %g\n", a * b); break;
        case 4:
            if (b == 0) puts("Erro: divisao por zero.");
            else printf("Resultado: %g\n", a / b);
            break;
    }
    return 0;
}
