/*
3) Escreva um programa para ler três números inteiros distintos e determinar o menor deles.
*/

#include <stdio.h> 

main(){

    int num1;
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    int num2;
    printf("Digite um numero: \n");
    scanf("%d", &num2);

    int num3;
    printf("Digite um numero: \n");
    scanf("%d", &num3);


    if(num1 != num2 && num1 != num3){

        if(num1 > num2 && num1 > num3){
            printf("O numero %d eh o maior numero. \n", num1);
        }
        if(num2 > num1 && num2 > num3){
            printf("O numero %d eh o maior numero. \n", num2);
        }
        if(num3 > num1 && num3 > num2){
            printf("O numero %d eh o maior numero. \n", num3);
        }
    }
    if(num1 == num2 && num1 != num3){
        if(num1 > num3){
            printf("O numero %d eh o maior numero. \n", num1);
        }
    }
    if(num1 == num3 && num1 != num2){
        if(num1 > num2){
            printf("O numero %d eh o maior numero. \n", num1);
        }
    }
    if(num3 == num2 && num1 != num3){
        if(num3 > num1){
            printf("O numero %d eh o maior numero. \n", num3);
        }
    }
    if(num1 == num2 && num1 == num3){
        printf("Os numeros sao iguais. \n");
    }

    return 0;
}