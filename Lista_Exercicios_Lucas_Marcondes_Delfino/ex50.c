/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 50
 * Descricao: IMC em C.
 * Data: 22/09/2026
 */

#include <stdio.h>

int main(void) {
    double peso, altura;
    printf("Peso (kg) e altura (m): ");
    if (scanf("%lf %lf", &peso, &altura) != 2 || peso <= 0 || altura <= 0) return 1;
    double imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
    if (imc < 18.5) puts("Abaixo do peso");
    else if (imc < 25) puts("Peso adequado");
    else if (imc < 30) puts("Sobrepeso");
    else if (imc < 35) puts("Obesidade grau I");
    else if (imc < 40) puts("Obesidade grau II");
    else puts("Obesidade grau III");
    return 0;
}
