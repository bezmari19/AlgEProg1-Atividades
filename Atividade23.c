#include <stdio.h>

int main(void) {
    /*Incremente o exercício anterior, para o caso das medidas formarem um triângulo válido, informar qual o tipo de triângulo que eles formam: equilátero, isósceles ou escaleno.*/
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A + B > C && A + C > B && B + C > A) {
        printf("Os valores inseridos podem ser as medidas dos lados de um triângulo.\n");

        if (A == B && B == C) {
            printf("O triângulo é EQUILÁTERO.\n");
        } else if (A == B || A == C || B == C) {
            printf("O triângulo é ISÓSCELES.\n");
        } else {
            printf("O triângulo é ESCALENO.\n");
        }
    }

    return 0;
}