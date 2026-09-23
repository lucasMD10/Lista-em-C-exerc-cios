/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 26
 * Descricao: Nomes significativos.
 * Data: 22/09/2026
 */

#include <stdio.h>

double calcularTotal(double precoUnitario, double quantidade) {
    return precoUnitario * quantidade;
}
int main(void) {
    double precoUnitario, quantidade;
    printf("Preco unitario e quantidade: ");
    if (scanf("%lf %lf", &precoUnitario, &quantidade) != 2 ||
        precoUnitario < 0 || quantidade < 0) return 1;
    printf("Total: %.2f\n", calcularTotal(precoUnitario, quantidade));
    return 0;
}
