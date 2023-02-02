/*
14. Um vendedor necessita de um programa que calcule o preço total devido por um cliente, 
que comprou um produto em sua loja. O programa deve receber o código do produto e a 
quantidade comprada, para então calcular e imprimir na tela o preço total, usando a 
tabela abaixo:
CODIGO DO PRODUTO   PREÇO UNITARIO 
        1001             5,32
        1324             6,45
        6548             2,37
        0987             5,32
        7623             6,45

*/

#include <stdio.h> 

main(){

        int cod;
        printf("Digite o codigo do produto: \n");
        scanf("%d", &cod);

        int quantidade; 
        printf("Digite a quantidade comprada: \n");
        scanf("%d", &quantidade);

        float total=0; 

        if(cod == 1001){
                total = quantidade * 5.32;
        }
        if(cod == 1324){
                total = quantidade * 6.45;
        }
        if(cod == 6548){
                total = quantidade * 2.37;
        }
        if(cod == 9001){
                total = quantidade * 5.32;
        }
        if(cod == 7623){
                total = quantidade * 6.45;
        }

        printf("Valor total: %.2f reais. \n", total);

  return 0;               
}