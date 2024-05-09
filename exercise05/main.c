#include <stdio.h>
#include <stdlib.h>

/*Exercício 05:
 *Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida a KM rodada e o total de combustível gasto.
 *O resultado deverá apresentar a unidade de medida km/l.
 */

int main(){

    float km, combustivel;

    printf("\nCalculo de consumo medio de um automovel.\n");

    printf("\n- Ola, informe o total de KM rodados: ");
        scanf("%f", &km);

    if (km <= 0) {
        printf("ERRO: Distancia invalida. Digite um valor positivo para a distancia.\n");
            return 1;
    }

    printf("\n- Agora informe o consumo total do combustivel em litros: ");
        scanf("%f", &combustivel);

    if (combustivel <= 0) {
        printf("ERRO: Consumo invalido. Digite um valor positivo para o consumo.\n");
            return 1;
    }

    float kmL = km / combustivel;

    printf("\nO consumo medio de seu veiculo é de: %.2f km/litro\n", kmL);

    return 0;
}
