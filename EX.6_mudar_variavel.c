/* Você tem duas variáveis, cada uma com um valor. Faça o valor de uma virar o valor da outra, 
e vice-versa, usando uma terceira variável auxiliar para não perder nenhum valor no caminho.*/

#include <stdio.h>

int main () {

   int batman = 0;
   int cara_de_barro = 9;
   int tomate;

   tomate = batman;
   batman = cara_de_barro;
   cara_de_barro = tomate;


   printf("batman %d e cara de barro %d\n", batman, cara_de_barro);

    return 0;
}