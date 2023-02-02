/*
1. Fazer um programa em "C" que leia o preço de um produto. Se o preço for menor que 
R$500,00, conceda um desconto de 8,7%.  Acima deste valor, conceda um desconto de 10%.
*/


#include <stdio.h>

main(){

    float produto;
    printf("Digite o preco do produto: \n");
    scanf("%f", &produto);

    float desconto =0; 
    if(produto < 500){
        desconto= (produto * 8.7) / 100; 
    }else{
        desconto= (produto * 10) / 100; 
    }

    printf("VALOR FINAL: %.2f reais \n", produto - desconto);



    return 0;
}