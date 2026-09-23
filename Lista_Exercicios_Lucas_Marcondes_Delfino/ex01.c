/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 01
 * Descricao: Lavar um carro.
 * Data: 22/09/2026
 */

#include <stdio.h>

void prepararMateriais(void) {
    puts("Separar agua, shampoo, esponja e panos.");
}
void lavarExterior(void) {
    puts("Molhar o carro, ensaboar de cima para baixo e enxaguar.");
}
void secarCarro(void) {
    puts("Secar com pano limpo e conferir as partes molhadas.");
}
int main(void) {
    prepararMateriais();
    lavarExterior();
    secarCarro();
    return 0;
}
