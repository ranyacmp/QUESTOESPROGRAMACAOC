/*
17. Faça um programa que leia dia, mês e ano. Depois verifique se foi digitada 
uma data válida. Ou seja, veriﬁque se o mês está entre 1 e 12, e se o dia existe
naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos
não bissextos.
    
    Um ano é bissexto se o ano é divisível por 400. Ou se o ano é divisível por 
    4 e não é divisível por 100
*/

#include <stdio.h> 

main(){

    int dia; 
    printf("Digite o dia: \n");
    scanf("%d", &dia);

    int mes; 
    printf("Digite o mes. \n");
    scanf("%d", &mes);

    int ano; 
    printf("Digite o ano. \n");
    scanf("%d", &ano);

    

        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            
            if(dia >= 1 && dia <= 31){
                printf("Data valida. \n");
            }else{
                printf("Data invalida. \n");
            }

        }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){

            if(dia >= 1 && dia <= 30){
                printf("Data valida. \n");
            }else{
                printf("Data invalida. \n");
            }

        }else if(mes == 2 && ((ano % 400) == 0)){

            if( dia >= 1 && dia <= 29){
                printf("Data valida. \n");
            }else{
                printf("Data invalida. \n");
            }

        }else if(mes == 2 && ((ano % 400) != 0)){

            if( dia >= 1 && dia <= 28){
                printf("Data valida. \n");
            }else{
                printf("Data invalida. \n");
            }
            
        }else{
            printf("Data invalida. \n");
        }

   

    
    return 0; 
}