/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 19
 * Descricao: Validação de data.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    int dia, mes, ano, limite;
    printf("Dia mes ano: ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) return 1;
    if (ano < 1 || mes < 1 || mes > 12 || dia < 1) {
        puts("Data invalida");
        return 0;
    }
    int bissexto = ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
    if (mes == 2) limite = bissexto ? 29 : 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) limite = 30;
    else limite = 31;
    puts(dia <= limite ? "Data valida" : "Data invalida");
    return 0;
}
