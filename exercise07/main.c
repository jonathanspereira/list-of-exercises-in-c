#include <stdio.h>
#include <stdlib.h>

/*Exercício 07:
 *Fazer um algoritmo que recebe o saldo de uma aplicação e escreve o novo saldo,
 *considerando o reajuste de 1 %.
 */

int main() {

    float saldoAplicacao;


    printf("\nCalculo de reajuste de aplicação com taxa de 1%\n");

    printf("\n- Ola, informe o saldo da aplicação: R$ ");
    scanf("%f", &saldoAplicacao);

    float novoSaldo = saldoAplicacao + (saldoAplicacao * 0.01);

    printf("\nO novo saldo com reajuste de 1%% e de R%% %.2f\n", novoSaldo);

    return 0;
}
