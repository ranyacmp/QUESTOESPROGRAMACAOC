/*
7) Deseja-se calcular a conta de consumo de energia elétrica de um consumidor. Para isto, 
escreva um programa que leia o código do consumidor, o preço do KW e a quantidade de KW 
consumido, e exiba o código do consumidor e o total
a pagar.
− total a pagar = preço x quantidade − total a pagar mínimo = R$ 21,23
*/

#include <stdio.h> 

main(){

    int codigo; 
    printf("Digite o codigo do consumidor: \n");
    scanf("%d", &codigo);

    float preco; 
    printf("Digite o preco do KW: \n");
    scanf("%f", &preco);

    float quantidade; 
    printf("Digite a quantidade consumida: \n");
    scanf("%f", &quantidade);

    float total= preco * quantidade; 

    printf("====== CODIGO: %d ====== \n", codigo);

    printf("O valor total a pagar eh de: %.2f \n", total);





    return 0;
}