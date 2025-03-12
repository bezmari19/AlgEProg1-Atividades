#include <stdio.h> 
/*Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).*/

int main(void) {
    int numeroInteiro;
    printf("Digite o número inteiro que escolheu aqui:\n");
    scanf("%d", &numeroInteiro);

    if (numeroInteiro >= 15 && numeroInteiro <= 25 || numeroInteiro >= 45 && numeroInteiro <= 50 ) {
        printf("SENAC");
    }

    return 0;
}