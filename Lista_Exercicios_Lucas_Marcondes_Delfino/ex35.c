/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 35
 * Descricao: Tamanho dos tipos.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));
    printf("int*: %zu bytes\n", sizeof(int *));
    return 0;
}
