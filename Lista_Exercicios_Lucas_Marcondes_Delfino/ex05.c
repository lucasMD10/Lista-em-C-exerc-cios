/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 05
 * Descricao: Quatro pilares e filmes.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *titulos[] = {"Filme de Acao", "Filme de Comedia", "Filme de Drama"};
    const char *generos[] = {"acao", "comedia", "drama"};
    char preferencia[30];
    printf("Genero preferido (acao, comedia ou drama): ");
    if (scanf("%29s", preferencia) != 1) return 1;
    for (int i = 0; i < 3; i++) {
        if (strcmp(preferencia, generos[i]) == 0) {
            printf("Recomendacao: %s\n", titulos[i]);
            return 0;
        }
    }
    puts("Nenhum filme encontrado para esse genero.");
    return 0;
}
