/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 42
 * Descricao: Primeiro dígito verificador do CPF.
 * Data: 22/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char cpf[128];
    printf("Nove digitos, sem pontuacao: ");
    if (!fgets(cpf, sizeof cpf, stdin)) return 1;
    cpf[strcspn(cpf, "\r\n")] = '\0';
    if (strlen(cpf) != 9) { puts("Digite exatamente nove digitos."); return 1; }
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') { puts("Entrada invalida."); return 1; }
        soma += (cpf[i] - '0') * (10 - i);
    }
    int resto = soma % 11;
    int digito = resto < 2 ? 0 : 11 - resto;
    printf("Primeiro digito verificador: %d\n", digito);
    return 0;
}
