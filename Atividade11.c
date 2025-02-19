#include <stdio.h>

int main(void) {
    /*Peça ao usuário para digitar uma temperatura em graus Celsius e, em seguida, exiba a temperatura equivalente em graus Fahrenheit.*/
  float Celcius;
  printf("Digite qual o grau que quer converter:\n");
  scanf("%f", &Celcius);

  float grauFahrenheit = (Celcius * 9/5) + 32;
  printf("O valor em Fahrenheit é: %.2f\n", grauFahrenheit);

  return 0;
}