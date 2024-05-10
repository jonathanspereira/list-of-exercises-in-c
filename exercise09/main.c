#include <stdio.h>
#include <stdlib.h>

/*Exercício 09:
 *Crie um algoritmo que recebe a razão de uma PA e o valor do 1º termo. Calcule e escreva o 10º termo da série.
 */

int main()
{
    float razao, primeiroTermo;
    int termoDesejado = 10;

    printf("\nCalculo do 10º termo de um Progressao Aritmetica (PA)");

    printf("\n\n- Olá, informe a razao da PA: ");
    scanf("%f", &razao);

    printf("\n- Agora informe o primeiro termo da PA: ");
    scanf("%f", &primeiroTermo);

    // calcula o 10 termo da PA
    int decimoTermo = primeiroTermo + ((termoDesejado - 1) * razao);

    printf("\nO 10º termo da Progressao Aritmetica é: %d\n", decimoTermo);

    return 0;
}
