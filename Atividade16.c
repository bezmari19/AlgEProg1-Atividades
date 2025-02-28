#include <stdio.h> 
/*Altere o exercício anterior de forma que ele informe também se os números são iguais. (Atividade 14)*/
int main(void) {
  int primeiroNumero;
  int segundoNumero;
  printf("Digite o primeiro número:\n");
  scanf("%d", &primeiroNumero);
  printf("Digite o segundo número:\n");
  scanf("%d", &segundoNumero);

  if (primeiroNumero == segundoNumero) {
    printf("Sim, os números digitados são iguais\n");
  } else {
    printf("Não, os números digitados não são iguais\n");
  }
  return 0;
}