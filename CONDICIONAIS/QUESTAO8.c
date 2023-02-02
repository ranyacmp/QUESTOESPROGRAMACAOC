/*
8) Construir um programa que indique se o número digitado está compreendido entre 20 e 90 ou não.
*/

#include <stdio.h>


main(){

    float num; 
    printf("Digite um numero: \n");
    scanf("%f", &num);

    if(num >= 20 && num <= 90){
        printf("Esse numero esta compreendido entre 20 e 90. \n");
    }else{
        printf("Esse numero nao esta compreendido entre 20 e 90. \n");
    }

    
    return 0; 
}