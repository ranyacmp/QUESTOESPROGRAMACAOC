/*
27) Faça um programa que leia um valor inteiro em segundos, e depois mostrá-lo em horas, minutos e segundos.
    
    Exemplo de saída do programa:
    
    36800 segundos são 10 horas e 13 minutos e 20 segundos
*/

#include <stdio.h> 

main(){

    int segundos;
    printf("Digite um valor em segundos: \n");
    scanf("%d", &segundos);

    int horas = segundos / 3600; 
    int reshoras= segundos % 3600;

    int minutos= reshoras / 60;
    int seg= reshoras % 60;

    printf("%d segundos sao %d horas %d minutos e %d segundos \n", segundos, horas, minutos, seg);
    return 0; 
}