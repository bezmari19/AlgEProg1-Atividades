#include <stdio.h>
/*Solicite que o usuário digite um número. Informe então se este número é par ou ímpar.*/
int main(void) {
   int par = 0;
   int impar = 1;
   
   int numeroEscolhido;
   printf("Digite o número escolhido:\n");
   scanf("%d", &numeroEscolhido);

   int calculoPouI = (numeroEscolhido % 2);

   if (calculoPouI == par) {
      printf("Par"); }
      
   else if (calculoPouI == impar) {
      printf("Impar"); }
   }