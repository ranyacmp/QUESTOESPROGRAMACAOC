/*
2) Ler um número inteiro e imprimir seu sucessor e seu antecessor.
*/

#include <stdio.h>

main(){

    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    int sucessor= num + 1;
    int antecessor= num - 1;

    printf("Seu antecessor: %d \n Seu sucessor: %d \n", antecessor, sucessor);

    return 0;
}

