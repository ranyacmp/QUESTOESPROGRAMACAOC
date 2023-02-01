/*
4) Ler três números a partir do teclado e apresentá-los em ordem decrescente.
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
    printf("Digite um numero:  \n");
    scanf("%d", &num3);

    if(num1 != num2 && num1 != num3){

        if(num1 < num2 && num1 < num3){

            if(num2 < num3){
                printf("%d %d %d \n", num3, num2, num1);
            }else{
                printf("%d %d %d \n", num2, num3, num1);
            }

        }

        if(num2 < num1 && num2 < num3){

            if(num1 < num3){
                printf("%d %d %d \n", num3, num1, num2);
            }else{
                printf("%d %d %d \n", num1, num3, num2);
            }

        }

        if(num3 < num2 && num3 < num1){

            if(num1 < num2){
                printf("%d %d %d \n", num2, num1, num3);
            }else{
                printf("%d %d %d \n", num1, num2, num3);
            }

        }

    }


    if(num1 == num2 && num1 != num3){

        if(num1 < num3){
             printf("%d %d %d \n", num3, num2, num1);
        }else{
             printf("%d %d %d \n", num2, num1, num3);
        }

    }

    if(num1 == num3 && num1 != num2){

        if(num1 < num2){
             printf("%d %d %d \n", num2, num1, num3);
        }else{
             printf("%d %d %d \n", num3, num1, num2);
        }

    }

    if(num2 == num3 && num2 != num1){

        if(num2 < num1){
             printf("%d %d %d \n", num1, num2, num3);
        }else{
             printf("%d %d %d \n", num2, num3, num1);
        }

    }

    if(num1 == num2 && num2 == num3){
        printf("Os numeros sao iguais. \n");
    }

    return 0;
}