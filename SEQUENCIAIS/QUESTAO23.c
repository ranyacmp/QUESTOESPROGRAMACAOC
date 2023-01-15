/*
23) Faça um programa que solicite ao usuário a digitação de 2 números e informe:
    - A soma dos números;
    - O produto do primeiro número pelo quadrado do segundo;
    - O resto da divisão do primeiro número pelo segundo
*/

#include <stdio.h> 

main(){


    int num1; 
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    int num2; 
    printf("Digite um numero: \n");
    scanf("%d", &num2);

    printf("A soma dos numeros eh: %d.\n", (num1 + num2));

    printf("O produto do primeiro pelo segundo eh: %d \n", (num1 * num2));

    printf("O resto da divisao do primeiro pelo segundo eh: %d \n",(num1 % num2));

    return 0; 
}