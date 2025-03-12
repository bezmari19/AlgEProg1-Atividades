#include <stdio.h> 
/*Escreva um programa solicita um numero e exibe a mensagem "SENAC" se este número for 14, 24, 23, 32 ou 33.*/

int main(void) {
  int escolhaNumero;
  printf("Digite o número que você escolheu:\n");
  scanf("%d", &escolhaNumero);

  if(escolhaNumero == 14 || escolhaNumero == 24 || escolhaNumero == 23  || escolhaNumero == 32 || escolhaNumero == 33) {
    printf("SENAC");
  }

  return 0;
  
}