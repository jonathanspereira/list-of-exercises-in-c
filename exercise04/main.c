#include <stdio.h>.
#include <stdlib.h>

/*Exercício 04:
 *Ler uma temperatura em graus centígrados e apresentá-la convertida em graus Fahrenheit.
 */

int main(){

    float tempC;

    printf("\nCalculadora de conversão de Centigrados em Fahrenheit (ºC em ºF)\n");
    printf("\n- Digite uma temperatura em graus centigrados (°C): ");
    scanf("%f", &tempC);

    // Conversão da temperatura
    float tempF = (tempC * 1.8) + 32.0;

    printf("\nA temperatura %.2f°C (Centigrados) e igual a %.2f°F (Fehrenheit)\n", tempC,tempF);

    return 0;
}
