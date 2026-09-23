/* Agora, com a mesma base e altura, calcule o perímetro do retângulo, que é a soma de todos os quatro lados.
*/


#include <stdio.h>

int main () {


    float base = 6;
    float altura = 4;
    float area, perimetro;   


    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("O perimetro eh %.2f", perimetro);
  

return 0;
}