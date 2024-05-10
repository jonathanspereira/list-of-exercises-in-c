#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Exercício 01:
 *Crie um algoritmo que leia dois valores inteiros e os armazena em duas variáveis.
 *Logo após, o programa troca os valores contidos nas variáveis entre si e os exibe ao usuário.
 */

int main() {

      int numero1, numero2, numeroArmazena, integerPart;

      printf("\n- Digite o primeiro número: ");
      scanf("%d", &numero1);

      printf("\n- Digite o segundo número: ");
      scanf("%d", &numero2);

      numeroArmazena = numero1;
      numero1 = numero2;
      numero2 = numeroArmazena;

      printf("\nO PRIMEIRO número é: %d\nO SEGUNDO número é: %d\n", numero1, numero2);

      return 0;
}

