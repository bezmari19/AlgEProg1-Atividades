#include <stdio.h>

int main(void) {
    /*Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros).*/
  float distanciaKM;
  float volumeCombustivel;
  printf("Digite a distância pela qual o carro rodou: \n");
  printf("Digite o volume de combustível consumido: \n");
  scanf("%f", &distanciaKM);
  scanf("%f", &volumeCombustivel);

  float mediaConsumo = distanciaKM / volumeCombustivel;
  printf("A média de consumo do carro é de: %.2f km/l", mediaConsumo);

  return 0; 
    
}