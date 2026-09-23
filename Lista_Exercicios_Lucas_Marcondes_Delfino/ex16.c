/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 16
 * Descricao: Aprovação do aluno.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double nota, frequencia;
    printf("Nota (0 a 10) e frequencia (0 a 100): ");
    if (scanf("%lf %lf", &nota, &frequencia) != 2 ||
        nota < 0 || nota > 10 || frequencia < 0 || frequencia > 100) return 1;
    if (nota >= 7 && frequencia >= 75) puts("Aprovado");
    else puts("Reprovado");
    return 0;
}
