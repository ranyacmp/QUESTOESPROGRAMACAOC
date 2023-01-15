/*
3) Faça um programa que leia um valor de conta de restaurante, representando o gasto realizado pelo cliente e imprimir o
valor total a ser pago, considerando que o restaurante cobra 10% de taxa de serviço do garçom.
*/

#include <stdio.h>

main(){

    float conta;
    printf("Digite o valor da conta: \n ");
    scanf("%f", &conta);

    float porcentagem= (conta * 10) / 100;

    printf("O valor total da conta eh: %f \n", (conta + porcentagem));
    
    return 0;
}