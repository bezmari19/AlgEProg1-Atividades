#include <stdio.h> 
/*Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor que 25 ou igual a 40.*/

int main(void) {
  int valorEscolhido;
  printf("Digite um valor:\n");
  scanf("%d", &valorEscolhido);

  if (valorEscolhido > 80 && valorEscolhido < 25 || valorEscolhido == 40) {
    printf("Olha só o valor é maior que 80, menor que 25 e talvez... seja igual a 40! Muito específico você.");
  }
  
  return 0;

}