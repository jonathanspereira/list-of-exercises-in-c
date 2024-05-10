#include <stdio.h>
#include <stdlib.h>
/*Exercício 06:
 *Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo
 *e o total de vendas efetuadas por ele no mês (em dinheiro).
 *Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
 *informar o seu nome, o salário fixo e salário no final do mês.
 */
int main(){

    char nomeVendedor[20];
    float salarioFixo, vendasTotal;

    printf("\nCalculo de salario variavel por vendedor");

    printf("\n\n- Ola, informe o nome do vendedor: ");
        scanf("%s", &nomeVendedor);

    printf("\n- Agora informe o salario fixo por mes de %s R$: ", nomeVendedor);
        scanf("%f", &salarioFixo);

    //Verifica se o valor do salario é valido
    if (salarioFixo <= 0){
        printf("\n## ERRO: Informe um salario positivo valido!\n");

        return 1;
    }

    printf("\n- Agora informe o total de vendas efetuadas no mes por %s em R$: ", nomeVendedor);
        scanf("%f", &vendasTotal);

    //Calcula o salario final com a comissão
    float salarioFinal = salarioFixo + (vendasTotal * 0.15);

    printf("\nO vendedor %s possui um salario fixo por mes de R$ %.2f e seu \nsalario final com a comissao pode chegar em R$ %.2f por mes \n", nomeVendedor, salarioFixo, salarioFinal);

    return 0;
}
