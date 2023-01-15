/*
18) Faça um programa que simule um calculador de 4 operações. Seu programa deverá ler dois números e o operador e
efetuar os cálculos, exibindo o resultado final. DICA: o operador deve ser declarado como char.
*/

#include <stdio.h> 

main(){

    int num1;
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    int num2;
    printf("Digite um numero: \n");
    scanf("%d", &num2);

    char op; 
    printf("Digite o operador: \n");
    scanf(" %c", &op);

    float conta;
    if(op == 43){
        conta= num1 + num2;
    }
    if(op == 45){
        conta= num1 - num2;
    }
    if(op == 42){
        conta= num1 * num2;
    }
    if(op == 47){
        conta= num1 / num2;
    }

    printf("%d %c %d = %.0f \n", num1, op, num2, conta);



    return 0;
}