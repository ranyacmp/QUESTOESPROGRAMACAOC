/*
4) Ler dois inteiros e imprimir o quadrado da diferença do primeiro valor 
pelo segundo e a diferença dos quadrados.
*/

#include <stdio.h>
#include <math.h>

main(){

    int num1;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num1);

    int num2;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num2);

    // Quadrado da diferença : (a - b)2 

    float quadradodif= pow((num1 - num2), 2);

    printf("O quadrado da diferenca do primeiro numero pelo segundo eh: %.2f \n", quadradodif);

    //Diferença dos quadrados: a² - b²

    float difquadrado= (pow(num1,2) - pow(num2,2));

    printf("Diferenca dos quadrados: %.2f \n", difquadrado);


    return 0;
}