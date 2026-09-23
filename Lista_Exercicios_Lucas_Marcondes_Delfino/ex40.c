/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 40
 * Descricao: Deslocamentos de bits.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
    long long entrada;
    printf("Inteiro nao negativo: ");
    if (scanf("%lld", &entrada) != 1 || entrada < 0 ||
        (unsigned long long) entrada > UINT_MAX / 2U) {
        puts("Valor invalido ou grande demais para dobrar.");
        return 1;
    }
    unsigned int numero = (unsigned int) entrada;
    printf("Dobro: %u\n", numero << 1);
    printf("Metade inteira: %u\n", numero >> 1);
    return 0;
}
