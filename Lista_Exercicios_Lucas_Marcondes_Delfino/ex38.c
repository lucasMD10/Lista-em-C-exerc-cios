/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 38
 * Descricao: Operador ternário.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int idade;
    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) return 1;
    printf("%s\n", idade >= 18 ? "Maior de idade" : "Menor de idade");
    return 0;
}
