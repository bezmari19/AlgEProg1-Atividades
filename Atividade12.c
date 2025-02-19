#include <stdio.h>

int main(void) {
    /*Peça ao usuário para digitar três números float e, em seguida, calcule e exiba a média aritmética desses números.*/
  float valor1;
  float valor2;
  float valor3;
  printf("Insira o 1° valor aqui: \n");
  printf("Insira o 2° valor aqui: \n");
  printf("Insira o 3° valor aqui: \n");
  scanf("%f", &valor1);
  scanf("%f", &valor2);
  scanf("%f", &valor3);

  float mediaAritmetica = (valor1 + valor2 + valor3) / 3;
  printf("A média aritmética dos três valores é: %f", mediaAritmetica);

  return 0;
}