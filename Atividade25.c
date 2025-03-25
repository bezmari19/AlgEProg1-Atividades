/*Sorteie um número de 1 a 100, exiba na tela e informe se é um número par ou ímpar.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand(time(NULL));
  int numeroSorteado = rand() % (100 - 1 + 1) + 1;
  printf("Aqui está o número sorteado: %d \n", numeroSorteado);

  if (numeroSorteado % 2 == 0) {
    printf("O número sorteado é par");
  }
  else if (numeroSorteado % 2 == 1) {
    printf("O número sorteado é impar");
  }
  return 0;
}