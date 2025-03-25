/*Sorteie 3 números de 1 a 10, e aplique todas as coisas que fizemos com o programa sobre triângulos da lista passada, verificando se forma um triângulo e classificando o mesmo.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand(time(NULL));
  int A = rand() % (10 - 1 + 1) + 1;
  int B = rand() % (10 - 1 + 1) + 1;
  int C = rand() % (10 - 1 + 1) + 1;
  printf("Aqui estão os números escolhidos: %d, %d, %d\n", A, B, C);

  if (A + B > C && A + C > B && B + C > A) {
    printf("Os valores escolhidos podem ser as medidas dos lados de um triângulo.\n");
    if (A == B && B == C) {
      printf("O triângulo é equilátero.\n");
    } else if (A == B || A == C || B == C) {
      printf("O triângulo é isósceles.\n");
    } else {
      printf("O triângulo é escaleno.\n");
    }
  }
  return 0;
}