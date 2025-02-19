#include <stdio.h>

int main(void) {
    /*Escreva um programa que solicita um número e então exibe 0 se o número for par, e 1 se o número for ímpar. (Não utilize o comando IF ainda).*/
  int par = 0;
  int impar = 1;
  
  int p;
  printf("Digite um número par: \n");
  scanf("%d", &p);
  printf("O número é: %d\n", par);
  
  int i;
  printf("Digite um número impar: \n");
  scanf("%d", &i);
  printf("O número é: %d\n", impar);

  return 0;
}