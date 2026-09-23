/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 03
 * Descricao: Organização da biblioteca.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int quantidade;
    char titulo[100];
    printf("Quantos livros serao cadastrados? ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 0) return 1;
    for (int i = 1; i <= quantidade; i++) {
        printf("Titulo do livro %d: ", i);
        if (scanf(" %99[^\n]", titulo) != 1) return 1;
        printf("Catalogado: %d - %s\n", i, titulo);
    }
    return 0;
}
