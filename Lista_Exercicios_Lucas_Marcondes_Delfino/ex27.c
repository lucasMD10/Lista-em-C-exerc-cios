/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 27
 * Descricao: Tipos de dados.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int inteiro;
    double decimal;
    char caractere, texto[100];
    printf("Inteiro: ");
    if (scanf("%d", &inteiro) != 1) return 1;
    printf("Decimal: ");
    if (scanf("%lf", &decimal) != 1) return 1;
    printf("Caractere: ");
    if (scanf(" %c", &caractere) != 1) return 1;
    printf("Texto: ");
    if (scanf(" %99[^\n]", texto) != 1) return 1;
    printf("Inteiro: %d\nDecimal: %.6f\nCaractere: %c\nTexto: %s\n",
           inteiro, decimal, caractere, texto);
    return 0;
}
