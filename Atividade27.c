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

  printf("Agora, digite o número escolhido:\n\n");
  scanf("%d", &numeroEscolhidoUsuario);

  if (numeroEscolhidoUsuario != numeroSorteado && numeroEscolhidoUsuario > numeroSorteado ) {
    printf("Ops, acho que não é esse número. O número sorteado pelo dado é menor que esse aqui.Você tem %d tentativas:\n", tentativas);
  }
  else if (numeroEscolhidoUsuario != numeroSorteado && numeroEscolhidoUsuario < numeroSorteado) {
    printf("De novo? Não é esse número. O dado escolheu um número maior que esse. Você tem %d tentativas:\n", tentativas);
  } 
  else if (numeroEscolhidoUsuario == numeroSorteado && tentativas == 3) {
    printf("Parabéns! Você acertou o número escolhido pelo Dado Mágico na 1ª tentativa! O número sorteado foi %d.", numeroSorteado);
  } 
  else if (numeroEscolhidoUsuario == numeroSorteado && tentativas == 2) {
    printf("Parabéns! Você acertou o número escolhido pelo Dado Mágico na 2ª tentativa! O número sorteado foi %d.", numeroSorteado);
  }
  else if (numeroEscolhidoUsuario == numeroSorteado && tentativas == 1) {
    printf("Parabéns! Você acertou o número escolhido pelo Dado Mágico na 3ª tentativa. O número sorteado foi %d.", numeroSorteado);
  }
  else {
      printf("Eu sinto muito, suas chances acabaram aqui. O número sorteado pelo Dado Mágico foi %d. Tente novamente!", numeroSorteado);
    }
  return 0;
}