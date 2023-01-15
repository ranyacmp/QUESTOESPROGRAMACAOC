/*
13) Entrar com um número e informar se ele é divisível por 14 e por 17, ao mesmo tempo.
*/


#include <stdio.h> 

main(){


    int num; 
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if((num % 14) == 0 && (num % 17) == 0){
        printf("Esse numero eh divisivel por 14 e 17 ao mesmo tempo. \n");
    }else{
        printf("Esse numero nao eh divisivel por 14 e 17 ao mesmo tempo. \n");
    }

    return 0; 
}