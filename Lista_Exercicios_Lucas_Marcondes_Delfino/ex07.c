/*
 * Aluno: Lucas Marcondes Delfino
 * Exercicio: 07
 * Descricao: Semáforo.
 * Data: 22/09/2026
 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void esperar(unsigned int segundos) {
#ifdef _WIN32
    Sleep(segundos * 1000U);
#else
    sleep(segundos);
#endif
}

int main(void) {
    while (1) {
        puts("Verde");
        fflush(stdout);
        esperar(30);
        puts("Amarelo");
        fflush(stdout);
        esperar(5);
        puts("Vermelho");
        fflush(stdout);
        esperar(25);
    }
    return 0;
}
