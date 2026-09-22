/* Peça pro computador guardar dois números em duas variáveis diferentes, 
some os dois, e guarde o resultado numa terceira variável. Depois, mostre esse resultado na tela*/

#include <stdio.h>

int main () {

   int number1, number2, resultado;

   printf("Digite um numero: ");
   scanf("%d", &number1);

   printf("Digite outro numero: ");
   scanf("%d", &number2);

   resultado = number1 + number2;

   printf("A soma eh %d", resultado);


    return 0;
}