/*
16) Ler um caracter, a partir do teclado e informar se é um dígito ( 0, 1, 2, ..., 9) 
ou se é uma letra maiúscula ou minúscula.
*/

#include <stdio.h> 

main(){

    char caracter;
    printf("Digite um caracter: \n");
    scanf(" %c", &caracter);


    if(caracter >= 48 && caracter <= 57){
        printf("Esse caracter eh um numero. \n");
    }else if(caracter >= 65 && caracter <= 90){
        printf("Esse caracter eh uma letra maiuscula. \n");
    }else if(caracter >= 97 && caracter <= 122 ){
        printf("Esse caracter eh uma letra minuscula. \n");
    }else{
        printf("Caracter nao reconhecido. \n");
    }

    return 0;
}