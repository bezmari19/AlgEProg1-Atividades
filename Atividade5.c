#include <stdio.h>

int main(void) { 
  /*Escreva um programa que ajuda os alunos a calcularem as notas desta disciplina. O programa deve perguntar as notas da primeira e da segunda prova, calcular a média aritmética entre elas, e exibir na tela.*/
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