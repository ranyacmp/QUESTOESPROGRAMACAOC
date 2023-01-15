/*
11) Escreva um programa para ler três números inteiros distintos e determinar o menor deles.
*/

#include <stdio.h> 

main(){

    // 10 12 13 // 12 13 10 // 13 12 10
    // 10 10 10
    // 10 12 10 
    // 10 10 12
    // 12 10 10
    int num1; 
    printf("Digite um numero: \n");
    scanf("%d", &num1);
    
    int num2; 
    printf("Digite um numero: \n");
    scanf("%d", &num2);

    int num3; 
    printf("Digite um numero: \n");
    scanf("%d",&num3);

    if(num1 != num2 && num1 != num3 && num3 != num2){
        
        if(num1 < num2 && num1 < num3){
            printf("O menor numero eh: %d \n ", num1);
        }
        if(num2 < num1 && num2 < num3){
            printf("O menor numero eh %d \n", num2);
        }
        if(num3 < num1 && num3 < num2){
            printf("O menor numero eh %d \n", num3);
        }
    }

    if(num1 == num2 && num1 != num3){
        if(num1 < num3){
            printf("O menor numero eh: %d \n ", num1);
        }else{
            printf("O menor numero eh %d \n", num3);
        }
    }
    if(num1 == num3 && num1 != num2){
        if( num1 < num2){
            printf("O menor numero eh: %d \n ", num1);
        }else{
             printf("O menor numero eh %d \n", num2);
        }
    }
    if(num3 == num2 && num3 != num1){
        if(num3 < num1){
            printf("O menor numero eh %d \n", num3);
        }else{
            printf("O menor numero eh: %d \n ", num1);
        }
    }
    if(num1 == num2 && num1 == num3){
        printf("Os numeros sao iguais. \n");
    }
    
    return 0;}