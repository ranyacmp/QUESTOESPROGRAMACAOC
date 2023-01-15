/*
21) Fazer um programa que pergunta do usuário o valor em metros e imprime o correspondente em pés. 
Considerando que 1 metro equivale a 3. 28084 pés
*/

#include <stdio.h> 

main(){

    float metros; 
    printf("Digite um tamanho em metros: \n");
    scanf("%f", &metros);

    float conversao= metros * 3.28084;

    printf("%.2f metros sao %.2f pes. \n", metros, conversao);

    return 0; 
}