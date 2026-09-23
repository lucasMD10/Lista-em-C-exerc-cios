/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 24
 * Descricao: Comentários descritivos.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    // Le o numero inteiro informado pelo usuario.
    int n;
    printf("Digite um inteiro: ");
    if (scanf("%d", &n) != 1) return 1;

    // Resto zero na divisao por 2 indica numero par.
    if (n % 2 == 0) {
        puts("par");
    } else {
        // Se o resto nao e zero, o numero e impar.
        puts("impar");
    }
    // Encerra o programa com sucesso.
    return 0;
}
