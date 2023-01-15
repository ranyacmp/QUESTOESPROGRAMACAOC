/*
12) Fazer um programa em "C" que leia o preço de um produto. Se o preço for menor 
que R$500,00, conceda um desconto de 8,7%. Acima deste valor, conceda um desconto de 10%.
*/

#include <stdio.h> 

main(){

    float preco;
    printf("Digite o preco do produto: \n");
    scanf("%f", &preco);

    float porcentagem;
    if(preco < 500){
        porcentagem= (preco * 8.7) / 100;
    }else{
        porcentagem= (preco * 10) / 100;
    }
    float total= preco - porcentagem; 

    printf("O valor total com desconto eh de : %.2f \n", total);


    return 0;
}