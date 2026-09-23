/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 45
 * Descricao: Incremento e decremento.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    int c = a++ + --b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
