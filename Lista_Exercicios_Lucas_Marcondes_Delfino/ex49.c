/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 49
 * Descricao: Conversão de nota em conceito.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double nota;
    printf("Nota (0 a 100): ");
    if (scanf("%lf", &nota) != 1 || nota < 0 || nota > 100) {
        puts("Nota invalida."); return 1;
    }
    if (nota >= 90) puts("A");
    else if (nota >= 80) puts("B");
    else if (nota >= 70) puts("C");
    else if (nota >= 60) puts("D");
    else puts("F");
    return 0;
}
