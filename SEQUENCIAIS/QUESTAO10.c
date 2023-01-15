/*
10) Escreva um programa que leia um número inteiro e determine se ele é par ou ímpar.
*/

#include <stdio.h> 

main(){

    int num;
    printf("Digite um numero: \n");
    scanf("%d",&num);

    if((num % 2) == 0){
        printf("Esse numero eh par. \n");
    }else{
        printf("Esse numero eh impar. \n");
    }



    return 0;
}