/*
14) Entrar com 2 números e informar se eles são divisíveis um pelo outro.
*/

#include <stdio.h> 

main(){

    int num1;
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    int num2;
    printf("Digite um numero: \n");
    scanf("%d", &num2);

    if((num1 % num2) == 0 || (num2 % num1) == 0 ){
        printf("Esses numeros sao divisiveis um pelo outro. \n");
    }else{
        printf("Esses numeros nao sao divisiveis um pelo outro. \n");
    }
    
    return 0; 
}