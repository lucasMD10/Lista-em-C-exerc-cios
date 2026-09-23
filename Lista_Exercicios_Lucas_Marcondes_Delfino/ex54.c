/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 54
 * Descricao: Comparação de strings.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char primeira[101], segunda[101];
    printf("Primeira string: ");
    if (!fgets(primeira, sizeof primeira, stdin)) return 1;
    if (!strchr(primeira, '\n') && !feof(stdin)) return 1;
    printf("Segunda string: ");
    if (!fgets(segunda, sizeof segunda, stdin)) return 1;
    if (!strchr(segunda, '\n') && !feof(stdin)) return 1;
    primeira[strcspn(primeira, "\n")] = '\0';
    segunda[strcspn(segunda, "\n")] = '\0';
    if (strcmp(primeira, segunda) == 0) puts("Strings iguais");
    else puts("Strings diferentes");
    return 0;
}
