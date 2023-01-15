/*
24) Elabore um programa para efetuar o cálculo da quantidade de litros de cerveja consumida por 
um determinado bloco durante o carnaval. O programa recebe como entrada a quantidade  de packs 
de cerveja consumidos durante o período. 
    - considerar que o carnaval possui cinco dias;
    - considerar que uma pack de cerveja tem 12 latas;
    - sabe-se que cada lata tem 350ml e que 1litro tem 1000ml;
    - Supondo que cada pack custa R$18.00, informar também o gasto em cerveja do referido bloco;

*/

#include <stdio.h> 

main(){

    int pack; 
    printf("Digite a quantidade de packs consumidos: \n");
    scanf("%d", &pack);

    int latas= pack * 12;
    int mls= latas * 350; 
    float litros= mls / 1000;
    float resto = mls % 1000; 
    float custo= pack * 18;

    printf("Valor gasto: %.2f \n", custo);
    printf("Foram consumidos %.2f litros e %.2f mls \n", litros, resto);
    
    return 0; 
}