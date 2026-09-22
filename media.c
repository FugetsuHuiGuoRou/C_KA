/* Um aluno tirou três notas em três provas diferentes.
 Guarde as três notas em três variáveis, calcule a média das três, e mostre o resultado na tela.*/

 #include <stdio.h>

 int main () {

    float nota1, nota2, nota3, media;

    printf("Digite três notas para calcular sua media: ");
    scanf ("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media eh %.2f ", media);
  

    return 0;
 }