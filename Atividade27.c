/*Escreva um programa que sorteia um número de 1 a 10 e dá duas chances para que o usuário acerte. O programa não deve alterar o número sorteado, e só deve pedir o segundo palpite, caso a pessoa erre sua primeira tentativa.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int numeroCerto = 7;
    int numeroEscolhido = rand() % (10 - 1 + 1) + 1;
    int tentativa;
    int rodadas = 2;

    printf("Seja bem vindo ao Dado da Sorte!\n");

    while (rodadas > 0) {
        printf("Escolha um número de 1 a 10 (Rodadas restantes: %d): ", rodadas);
        scanf("%d", &tentativa);

        if (tentativa > numeroCerto) {
            printf("Ops, acho que você errou! O número certo é menor que %d\n", tentativa);
        } else if (tentativa < numeroCerto) {
            printf("Ops, acho que você errou! O número certo é maior que %d\n", tentativa);
        } else {
            printf("Eba!! Você acertou. O número certo é %d\nVocê acertou em %d rodadas\n", numeroCerto, 2 - rodadas +1);
            return 0;
        }

        rodadas--;
    }

    printf("Suas rodadas acabaram. O número certo era %d.\n", numeroCerto);

    return 0;
}