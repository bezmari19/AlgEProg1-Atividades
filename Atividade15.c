#include <stdio.h> 
/*Escrever um algoritmo que leia dois valores inteiro distintos e informe qual deles é o maior.*/
int main(void) {
  int primeiroNumero;
  int segundoNumero;
  printf("Digite o primeiro número:\n");
  scanf("%d", &primeiroNumero);
  printf("Digite o segundo número:\n");
  scanf("%d", &segundoNumero);

  if (primeiroNumero > segundoNumero) {
    printf("O número maior é: %d\n", primeiroNumero);
  } else {
    printf("O número maior é: %d\n", segundoNumero);
  }
  return 0;
}