/*
6) Entrar com um número e informar se ele é divisível por 10, ou é divisível por 5, ou é 
divisível por 2 ou se não é divisível por nenhum destes.
*/

#include <stdio.h> 

main(){

    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    int aux=0; 

    if((num % 10) == 0){
        printf("Esse numero eh divisivel por 10. \n");
        aux++;
    }

    if((num % 5) == 0){
        printf("Esse numero eh divisivel por 5. \n");
        aux++;
    }

    if((num % 2) == 0){
        printf("Esse numero eh divisivel por 2. \n");
        aux++;
    }

    if(aux == 0){
        printf("Esse numero nao eh divisivel por 10, 5 ou 2. \n");
    }
    
    return 0; 
}