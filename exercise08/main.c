#include <stdio.h>
#include <stdlib.h>

/*Exercício 08:
 *Crie um algoritmo que receba os valores para xnum1, xnum2 e xnum3,
 *calcule e exiba o valor de X, sabendo-se que:
 * x = xnum1 + (xnum2 / xnum3+ xnum1) + 2(xnum1 - xnum2)
 */

int main(){

    float numX, xnum1 , xnum2, xnum3;

    printf("\nA seguir informe 3 'tres' numeros reais para calcular o valor de 'x'.");

    printf("\n\n- Olá informe o primeiro numero real: ");
    scanf("%f", &xnum1);

    printf("\n- Olá informe o segundo numero real: ");
    scanf("%f", &xnum2);

    printf("\n- Olá informe o terceiro numero real: ");
    scanf("%f", &xnum3);

    numX = xnum1 + (xnum2 / xnum3+ xnum1) + (2 * (xnum1 - xnum2));

    printf("\n\nResultado do calculo de 'X' é: %.3f \n", numX);

    return 0;
}
