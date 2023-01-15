/*
9) Escreva um programa que leia dois números e exiba o maior deles.
*/

#include <stdio.h> 

main(){

    int num1; 
    printf("Digite um numero: \n");
    scanf("%d",&num1);

    int num2; 
    printf("Digite um numero: \n");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("O maior numero eh: %d \n", num1);
    }else if(num2 > num1){
        printf("O maior numero eh : %d \n ", num2);
    }else{
        printf("Os numeros sao iguais. \n ");
    }

    return 0; 
}