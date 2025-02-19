#include <stdio.h>

int main(void) {
    /*Fazer um algoritmo para ler os valores dos coeficientes A, B e C de uma equação quadrática. Calcular e imprimir o valor do discriminante (delta). Delta = B²– 4AC.*/
  int A;
  int B;
  int C;
  printf("Insira o valor de A: \n");
  printf("Insira o valor de B: \n");
  printf("Insira o valor de C: \n");
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  int resultadoDelta = B * B - 4 * A * C;
  printf("O valor de Delta é: %d", resultadoDelta);

  return 0;
}