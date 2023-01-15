/*
29) Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados 
da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados 
e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que 
custam R$ 25,00. Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços 
em 3 situações:
    - Comprando apenas latas de 18 litros;
    - Comprando apenas galões de 3,6 litros;
    - Comprando galões de 18 e 3.6 litros, de forma a minimizar a quantidade de galões.

        - dica
        Aqui você usa os mesmos conceitos de divisão e resto de divisão dos exercícios acima.
            
    Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias. 
    
    ps: para arredondar, use a funcão ceil() da biblioteca math.h
*/

#include <stdio.h> 
#include <math.h>


main(){

    float area;
    printf("Digite a area em metros quadrados: \n");
    scanf("%f", &area);

    int litros= area / 6;

    float latas= litros / 18;
    float valor1= ceil(latas) * 80; 
    printf("%d litros, comprando apenas latas de 18L sai a %.2f reais \n", litros, valor1);

    float galoes= litros / 3.6;
    float valor2= ceil(galoes) * 25;
    printf("%d litros, comprando apenas galoes de 3,6L sai a %.2f reais \n", litros, valor2);

    float resto= litros % 18;
    float valor3= valor1 + (resto * 25);
    printf("%d litros, comprando latas e galoes sao %.2f latas e %.2f galoes e sai a %.2f reais \n", litros, latas, resto, valor3);

    return 0; 
}