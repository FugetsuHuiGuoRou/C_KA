/* Guarde uma temperatura em graus Celsius numa variável, 
e converta ela para Fahrenheit, usando a fórmula: Fahrenheit = Celsius × 9/5 + 32.*/


#include <stdio.h>

int main () {

    float celsius = 60.0;
    float fahrenheit;
    
    fahrenheit = celsius * 9 / 5 + 32;

    printf("Convertido para %.2f", fahrenheit);

    




    return 0;
}