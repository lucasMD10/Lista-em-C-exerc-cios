/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 31
 * Descricao: Saudação com nome completo.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[150];
    printf("Nome completo: ");
    if (!fgets(nome, sizeof nome, stdin)) return 1;
    nome[strcspn(nome, "\n")] = '\0';
    printf("Ola, %s! Seja bem-vindo(a)!\n", nome);
    return 0;
}
