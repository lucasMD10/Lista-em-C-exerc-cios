/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 17
 * Descricao: Salário líquido.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double bruto;
    printf("Salario bruto: ");
    if (scanf("%lf", &bruto) != 1 || bruto < 0) return 1;
    double desconto = bruto * 0.10;
    printf("Desconto: R$ %.2f\nLiquido: R$ %.2f\n", desconto, bruto - desconto);
    return 0;
}
