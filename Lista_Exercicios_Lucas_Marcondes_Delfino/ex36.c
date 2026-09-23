/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 36
 * Descricao: Cadastro de um aluno.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[150];
    int matricula;
    float nota1, nota2, nota3;
    printf("Nome: ");
    if (!fgets(nome, sizeof nome, stdin)) return 1;
    nome[strcspn(nome, "\n")] = '\0';
    printf("Matricula: ");
    if (scanf("%d", &matricula) != 1) return 1;
    printf("Tres notas: ");
    if (scanf("%f %f %f", &nota1, &nota2, &nota3) != 3) return 1;
    float media = (nota1 + nota2 + nota3) / 3.0f;
    printf("Aluno: %s\nMatricula: %d\nMedia: %.2f\n", nome, matricula, media);
    return 0;
}
