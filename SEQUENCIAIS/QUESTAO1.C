/*
1) Escreva um programa que leia duas variáveis inteiras e troque o conteúdo entre elas.

*/

#include <stdio.h>

main(){

    int x; 
    printf("Digite um numero x : \n");
    scanf("%d", &x);

    int y; 
    printf("Digite um numero y: \n");
    scanf("%d", &y);

    int aux= x; 
    x=y; 
    y = aux; 

    printf("Valor de x: %d , valor de y: %d \n", x, y);


    return 0;
}

