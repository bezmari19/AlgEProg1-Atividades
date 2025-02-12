#include <stdio.h> 
/*Escreva um programa que realiza este cálculo e exibe o valor correto com a mensagem na tela: Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar ___ carros.*/
int main(void) {
  printf("Vamos distribuir 359 carros para 4 pessoase e portanto devem sobrar %d carros", 359%4);
  return 0;
}