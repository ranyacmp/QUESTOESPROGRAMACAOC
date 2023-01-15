/*
25) Escreva um programa que recebe as dimensões (em metros) de um terreno retangular e em seguida 
as dimensões de uma casa (também em metros e retangular) sobre este terreno. Em seguida calcule 
e apresente a área livre do terreno, em metros quadrados e em percentagem.
*/

#include <stdio.h> 

main(){

    float larguraT;
    printf("Digite a largura o terreno: \n");
    scanf("%f", &larguraT);

    float compriT;
    printf("Digite o comprimento do terreno: \n");
    scanf("%f", &compriT);

    float larguraC;
    printf("Digite a largura da casa: \n");
    scanf("%f", &larguraC);

    float compriC;
    printf("Digite o comprimento da casa: \n");
    scanf("%f", &compriC);

    float areaT= larguraT * compriT;
    float areaC= larguraC * compriC;

    float areaLM= areaT - areaC;
    float porcentagem=(100 * areaLM) / areaT;

    printf("%.2f metros de area livre, representam %.2f porcento do terreno. \n", areaLM, porcentagem);



    return 0; 
}