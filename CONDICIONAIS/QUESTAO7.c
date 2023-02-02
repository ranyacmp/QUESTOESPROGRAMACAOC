/*
7) Faça um programa que simule um calculador de 4 operações. Seu programa deverá ler dois 
números e o operador e efetuar os cálculos, exibindo o resultado final. DICA: o operador 
deve ser declarado como char.
*/

#include <stdio.h> 

main(){

    float num1; 
    printf("Digite um numero: \n");
    scanf("%f",&num1);

    float num2; 
    printf("Digite um numero: \n");
    scanf("%f", &num2);

    char op;
    printf("Digite um operador: \n");
    scanf(" %c", &op);

    float conta= 0; 

    if(op == 43){
        conta = num1 + num2; 
    }else if(op == 45){
        conta = num1 - num2; 
    }else if(op == 42){
        conta = num1 * num2; 
    }else if(op == 47){
        conta = num1 / num2;
    }else{
        printf("Operador nao identificado. \n");
    }

    printf("%.2f %c %.2f = %.2f \n", num1, op, num2, conta);

    return 0; 

}