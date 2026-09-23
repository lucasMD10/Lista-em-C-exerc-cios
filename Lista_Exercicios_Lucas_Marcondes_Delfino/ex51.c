/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 51
 * Descricao: Dia da semana.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int dia;
    printf("Dia (1 = domingo, 7 = sabado): ");
    if (scanf("%d", &dia) != 1) return 1;
    switch (dia) {
        case 1: puts("Domingo"); break;
        case 2: puts("Segunda-feira"); break;
        case 3: puts("Terca-feira"); break;
        case 4: puts("Quarta-feira"); break;
        case 5: puts("Quinta-feira"); break;
        case 6: puts("Sexta-feira"); break;
        case 7: puts("Sabado"); break;
        default: puts("Dia invalido: informe de 1 a 7.");
    }
    return 0;
}
