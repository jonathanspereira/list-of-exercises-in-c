#include <stdio.h>
#include <stdlib.h>

/*Exercício 10:
 *Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto.
 *Faça um algoritmo que possa entrar com o valor de um produto escreva o novo valor tendo em vista que o desconto foi de 9%.
 */

int main()
{
    float valorProduto, descontoProduto = 0.09;

    printf("\nCalculo de desconto sobre produtos");

    printf("\n\n- Ola, informe o valor do produto: ");
    scanf("%f", &valorProduto);

    // calcula o novo valor com desconto
    float novoValor = valorProduto - ( valorProduto * descontoProduto);

    printf("\nO valor do produto com desconto de 9%% e de %.2f\n", novoValor);

    return 0;
}

