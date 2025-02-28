#include <stdio.h> 
/*Crie um programa que recebe dois números inteiros. Exiba a mensagem "sim" apenas caso ambos sejam maiores que 10.*/
int main(void) {
  int numeroInteiro;
  int outroInteiro;
  printf("Digite o primeiro número inteiro aqui:\n");
  scanf("%d", &numeroInteiro);
  printf("Digite o segundo número inteiro aqui:\n");
  scanf("%d", &outroInteiro);

  if (numeroInteiro == outroInteiro) {
    printf("Sim");
  } else {
    
  }
  return 0;
}