#include <stdio.h>

int main(void) { 
  
  printf("Calculadora de Notas: \n");

    float notaUm;
    float notaDois;
    printf("Digite a notaUm \n");
    printf("Digite a notaDois\n");
    scanf("%f", &notaUm);
    scanf("%f", &notaDois);

float mediaAritmetica = (notaUm + notaDois) / 2;
  printf("A media do aluno é: %f", mediaAritmetica);

  return 0;
}