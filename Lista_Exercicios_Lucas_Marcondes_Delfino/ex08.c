/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 08
 * Descricao: Adivinhação.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int) time(NULL));
    int secreto = rand() % 100 + 1, palpite;
    do {
        printf("Palpite (1 a 100): ");
        if (scanf("%d", &palpite) != 1) return 1;
        if (palpite < 1 || palpite > 100) puts("Fora do intervalo.");
        else if (palpite < secreto) puts("O numero secreto e maior.");
        else if (palpite > secreto) puts("O numero secreto e menor.");
        else puts("Acertou!");
    } while (palpite != secreto);
    return 0;
}
