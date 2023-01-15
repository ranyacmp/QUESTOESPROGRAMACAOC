/*
22) Uma empresa contrata um encanador a R$ 30.00 por dia. Crie um programa que solicite o número de 
dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são 
descontados 8% para imposto de renda.
*/

#include <stdio.h> 

main(){

    int dias; 
    printf("Digite a quantidade de dias trabalhados: \n");
    scanf("%d", &dias);

    float bruto= dias * 30; 
    float imposto= (bruto * 8) / 100;
    float total= bruto - imposto;

    printf("O valor a ser pago eh: %.2f reais. \n", total); 


    return 0; 
}