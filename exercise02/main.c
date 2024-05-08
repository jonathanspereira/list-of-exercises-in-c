#include <stdio.h>
#include <stdlib.h>

/*Exercício 02:
**Crie um algoritmo que Leia um número inteiro e imprima seu sucessor e seu antecessor.
*/

int main()
{
    int number;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    int antecessor = number - 1;
    int sucessor = number + 1;

    printf("\nO ANTECESSOR do %d e o %d.\n",number,antecessor);
    printf("O SUCESSOR do %d e o %d.\n",number,sucessor);

    return 0;
}
