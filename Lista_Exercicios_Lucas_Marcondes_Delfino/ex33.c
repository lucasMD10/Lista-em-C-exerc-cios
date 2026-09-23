/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 33
 * Descricao: Média de quatro notas.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4;
    printf("Quatro notas: ");
    if (scanf("%f %f %f %f", &n1, &n2, &n3, &n4) != 4) return 1;
    float media = (n1 + n2 + n3 + n4) / 4.0f;
    printf("Media: %.2f\n", media);
    return 0;
}
