/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 56
 * Descricao: Simulação de login.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char usuario[100], senha[100];
    printf("Usuario: ");
    if (!fgets(usuario, sizeof usuario, stdin)) return 1;
    if (!strchr(usuario, '\n') && !feof(stdin)) return 1;
    printf("Senha: ");
    if (!fgets(senha, sizeof senha, stdin)) return 1;
    if (!strchr(senha, '\n') && !feof(stdin)) return 1;
    usuario[strcspn(usuario, "\n")] = '\0';
    senha[strcspn(senha, "\n")] = '\0';
    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0) {
        puts("Acesso concedido.");
    } else {
        puts("Acesso negado.");
    }
    return 0;
}
