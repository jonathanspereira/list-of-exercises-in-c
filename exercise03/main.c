#include <stdio.h>
#include <stdlib.h>

/*Exercício 03:
 *Crie um algoritmo que receba quatro números e imprima a média ponderada,
 *sabendo-se que os pesos são respectivamente: 1, 2, 3 e 4.
 */

int main()
{
    int num1, num2, num3, num4;

    printf("Olá, digite 4 numeros inteiros a seguir:\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    int mponderada = ((num1*1) + (num2*2) + (num3*3) + (num4*4)) / (1 + 2 + 3 + 4);

    printf("\nA media ponderada dos numero digitados e: %d\n", mponderada);

    return 0;
}
