#include <stdio.h>

int main(void) {
    /*Crie um programa que calcula o volume de um cilindro, solicitando que o usuário digite apenas a medida do raio e a altura do mesmo.*/
  float pi = 3.14;
  float raio;
  float altura;
  printf("Digite o valor do raio: \n");
  printf("Digite o valor da altura: \n");
  scanf("%f", &raio);
  scanf("%f", &altura);

  float volumeCilindro = pi * raio * raio * altura;
  printf("O volume do cilindro é: %f", volumeCilindro);

  return 0;
  
}