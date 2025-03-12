#include <stdio.h> 
/*Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo.*/

int main(void) {
  int A;
  int B;
  int C;
  printf("Digite A:\n");
  printf("Digite B:\n");
  printf("Digite C:\n");
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  if (A + B > C && A + C > B && B + C > A) {
    printf("Os valores inseridos podem ser as medidas dos lados de um triângulo");
  }
  
  return 0;

}