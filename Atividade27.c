/*Escreva um programa que sorteia um número de 1 a 10 e dá duas chances para que o usuário acerte. O programa não deve alterar o número sorteado, e só deve pedir o segundo palpite, caso a pessoa erre sua primeira tentativa.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int numeroSorteado = rand() % (10 - 1 + 1) + 1;
    int numeroEscolhidoUsuario;
    int tentativas = 3;

    printf("Bem vindo ao jogo do Dado Mágico! Você terá 3 tentativas para adivinhar o número sorteado, e só pode escolher um número entre 1 e 10. Bom jogo e boa sorte!\n");

    while (tentativas > 0) {
        printf("\nAgora, digite o número escolhido:\n");
        scanf("%d", &numeroEscolhidoUsuario);

        if (numeroEscolhidoUsuario == numeroSorteado) {
            printf("Parabéns! Você acertou o número escolhido pelo Dado Mágico! O número sorteado foi %d.\n", numeroSorteado);
            break;
        } else if (numeroEscolhidoUsuario > numeroSorteado) {
            printf("Ops, acho que não é esse número. O número sorteado pelo dado é menor que esse aqui.\n");
        } else {
            printf("De novo? Não é esse número. O dado escolheu um número maior que esse.\n");
        }

        tentativas--;

        if (tentativas > 0) {
            printf("Você ainda tem %d tentativa(s).\n", tentativas);
        } else {
            printf("Eu sinto muito, suas chances acabaram aqui. O número sorteado pelo Dado Mágico foi %d. Tente novamente!\n", numeroSorteado);
        }
    }

    return 0;
}