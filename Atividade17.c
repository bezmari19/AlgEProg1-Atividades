#include <stdio.h> 
/*Crie um programa que recebe um número inteiro e informa se este número é múltiplo de 10.*/
int main(void) {
  int numeroInteiro;
  printf("Digite um número inteiro:\n");
  scanf("%d", &numeroInteiro);

  int dividePDez = numeroInteiro / 10;
  int restoInteiro = dividePDez % 10;

  if (restoInteiro == 0) {
    printf("O número que você inseriu, é disível por 10\n");
  } else {
    printf("Ops! Esse número não é divisível por 10\n");
  }
  return 0;
}