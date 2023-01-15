/*
6) Ler uma temperatura em graus Centígrados e apresentá-la convertida em graus Fahrenheit. 
A fórmula de conversão é: (0 °C × 9/5) + 32 = 32 °F. Onde F é a temperatura em Fahrenheit e C 
é a temperatura em Centígrados.
*/

#include <stdio.h>

main(){


    float celcius;
    printf("Digite uma temperatura em celcius: \n");
    scanf("%f", &celcius);

    float conversao= (celcius * (9 / 5)) + 32;

    printf("%.2f Fahrenheit \n", conversao);


    return 0;
}