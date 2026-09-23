/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 15
 * Descricao: Par ou ímpar com validação.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    char linha[100], extra;
    int numero;
    printf("Digite um inteiro: ");
    if (!fgets(linha, sizeof linha, stdin)) return 1;
    if (sscanf(linha, "%d %c", &numero, &extra) != 1) {
        puts("Inteiro invalido.");
        return 1;
    }
    puts(numero % 2 == 0 ? "Par" : "Impar");
    return 0;
}
