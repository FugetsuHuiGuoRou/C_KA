/* Alguém investiu um valor (capital), a uma taxa de juros por mês, durante um número de meses.
Calcule quanto de juros essa pessoa vai receber, usando a fórmula: Juros = Capital × Taxa × Tempo.
*/

#include <stdio.h>


int main () {

    float valor = 20.00;
    int juros = 20;
    int meses = 5;

    juros = valor * juros * meses;

    printf("Tu vai receber %d juros", juros);


    return 0;


}