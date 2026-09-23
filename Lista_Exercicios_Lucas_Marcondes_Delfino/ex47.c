/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 47
 * Descricao: Aumento salarial.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double salario;
    printf("Salario: ");
    if (scanf("%lf", &salario) != 1 || salario < 0) return 1;
    if (salario < 1000) salario *= 1.20;
    else if (salario <= 2000) salario *= 1.10;
    else salario *= 1.05;
    printf("Novo salario: R$ %.2f\n", salario);
    return 0;
}
