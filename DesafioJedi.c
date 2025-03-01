#include <stdio.h> 
/*Escreva um programa que converta um intervalo de tempo dado em segundos, em: horas, minutos e segundos.*/
int main(void) {
  int quantosSegundos;
  printf("Digite a quantidade dos segundos contados aqui:\n");
  scanf("%d", &quantosSegundos);

  int horasCheia = quantosSegundos / 3600, minutosCheia = (quantosSegundos %
  3600) / 60, segundosCheia = (quantosSegundos % 3600) % 60;

  printf("Os segundos %d correspondem a %dh %dmin e %ds \n", quantosSegundos, horasCheia, minutosCheia, segundosCheia);

  return 0;
  
}