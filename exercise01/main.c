#include <stdio.h>
#include <stdlib.h>

/*
**Exercício 01: Crie um algoritmo que leia dois valores inteiros e os armazena em duas variáveis.
**Logo após, o programa troca os valores contidos nas variáveis entre si e os exibe ao usuário.
*/

int main(){

int number1, number2, numberarmazena;

    printf("Digite o primeiro numero: ");
    scanf("%d", &number1);

    printf("Digite o segundo numero: ");
    scanf("%d", &number2);

    numberarmazena = number1;
    number1 = number2;
    number2 = numberarmazena;

    printf("O primeiro numero é: %d\nO segundo numero é: %d", number1, number2);

    return 0;

}
