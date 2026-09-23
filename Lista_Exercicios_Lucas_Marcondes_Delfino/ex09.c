/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 09
 * Descricao: Quadrado de asteriscos.
 * Data: 22/09/2026
 */

#include <stdio.h>

void desenhaQuadrado(int lado) {
    for (int linha = 0; linha < lado; linha++) {
        for (int coluna = 0; coluna < lado; coluna++) printf("*");
        printf("\n");
    }
}

int main(void) {
    int lado;
    printf("Lado: ");
    if (scanf("%d", &lado) != 1 || lado <= 0) return 1;
    desenhaQuadrado(lado);
    return 0;
}
