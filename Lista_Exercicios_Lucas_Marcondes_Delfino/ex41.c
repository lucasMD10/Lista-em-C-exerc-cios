/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 41
 * Descricao: Letra minúscula.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    char c;
    printf("Caractere: ");
    if (scanf(" %c", &c) != 1) return 1;
    puts(c >= 'a' && c <= 'z' ? "Letra minuscula" : "Nao e letra minuscula");
    return 0;
}
