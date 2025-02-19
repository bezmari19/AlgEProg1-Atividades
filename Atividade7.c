#include <stdio.h>

int main(void) {
    /*Em uma festa, homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens e quantas mulheres participaram da festa e calcula o valor total arrecadado com as entradas.*/
  int valorH = 20;
  int valorM = 17;
  int quantidadeMulheres;
  int quantidadeHomens;
  printf("Digite quantas mulheres estavam na festa: \n");
  printf("Digite quantos homens estavam na festa: \n");
  scanf("%d", &quantidadeMulheres);
  scanf("%d", &quantidadeHomens);

  int valorArrecadado = (quantidadeMulheres * valorM) + (quantidadeHomens * valorH);
  printf("O valor arrecadado foi de: %d", valorArrecadado);

  return 0;
  
}