/*
12. Escrever um programa que lê um conjunto de 4 valores *i,a,b,c*, onde *i* é um 
valor inteiro e positivo e *a,b,c*, são quaisquer valores reais e os escreva na 
tela da seguinte forma:
    - os três valores *a,b,c* em ordem crescente, se *i* = 1
    - os três valores *a,b,c* em ordem decrescente, se *i* = 2,
    - os três valores *a,b,c* de forma que o maior dentre *a,b,c* fique entre os 
    outros dois valores, se *i* = 3.
*/

#include <stdio.h> 


main(){

    int i; 
    printf("Digite um valor inteiro positivo: \n");
    scanf("%d", &i); 

    float a;
    printf("Digite qualquer valor: \n");
    scanf("%f", &a);

    float b; 
    printf("Digite qualquer valor: \n");
    scanf("%f", &b);

    float c;
    printf("Digite qualquer valor: \n");
    scanf("%f", &c);


               /*--------------------------------------------------------*/    

     if(i == 1){

        if(a != b && a != c){

            if(a > b && a > b){

                if(b > c){
                    printf("Ordem crescente: %.2f %.2f %.2f \n", c, b, a);
                }else{
                    printf("Ordem crescente: %.2f %.2f %.2f \n", b, c, a);
                }

            }
            if(b > a && b > c){

                if(a > c){
                    printf("Ordem crescente: %.2f %.2f %.2f \n", c, a, b);
                }else{
                    printf("Ordem crescente: %.2f %.2f %.2f \n", a, c, b);
                }

            }
            if(c > b && c > a){
                
                if(b > a){
                    printf("Ordem crescente: %.2f %.2f %.2f \n", a, b, c);
                }else{
                    printf("Ordem crescente: %.2f %.2f %.2f \n", b, a, c);
                }

            }


        }

        if(a == b && a != c){

            if(a > c){
                printf("Ordem crescente: %.2f %.2f %.2f \n", c, b, a);
            }else{
                printf("Ordem crescente: %.2f %.2f %.2f \n", b, a, c);
            }

        }

        if(a == c && a != b){

            if(b > a){
                printf("Ordem crescente: %.2f %.2f %.2f \n", c, a, b);
            }else{
                printf("Ordem crescente: %.2f %.2f %.2f \n", b, a, c);
            }

        }

        if(b == c && b != a){

            if(b > a){
                printf("Ordem crescente: %.2f %.2f %.2f \n", a, c, b);
            }else{
                printf("Ordem crescente: %.2f %.2f %.2f \n", b, c, a);
            }

        }
        
        if(a == b && a == c){

            printf("Os numeros sao iguais. \n");

        }


    }
   
               /*--------------------------------------------------------*/

    if(i == 2){

        if(a != b && a != c){

            if(a > b && a > b){

                if(b > c){
                    printf("Ordem decrescente: %.2f %.2f %.2f \n", a, b, c);
                }else{
                    printf("Ordem decrescente: %.2f %.2f %.2f \n", a, c, b);
                }

            }
            if(b > a && b > c){

                if(a > c){
                    printf("Ordem decrescente: %.2f %.2f %.2f \n", b, a, c);
                }else{
                    printf("Ordem decrescente: %.2f %.2f %.2f \n", b, c, a);
                }

            }
            if(c > b && c > a){
                
                if(b > a){
                    printf("Ordem decrescente: %.2f %.2f %.2f \n", c, b, a);
                }else{
                    printf("Ordem decrescente: %.2f %.2f %.2f \n", a, c, b);
                }

            }


        }

        if(a == b && a != c){
            if(a > c){
                printf("Ordem decrescente: %.2f %.2f %.2f \n", a, b, c);
            }else{
                printf("Ordem decrescente: %.2f %.2f %.2f \n", c, a, b);
            }
        }

        if(a == c && a != b){

            if(b > a){
                printf("Ordem decrescente: %.2f %.2f %.2f \n", b, a, c);
            }else{
                printf("Ordem decrescente: %.2f %.2f %.2f \n", c, a, b);
            }

        }

        if(b == c && b != a){

            if(b > a){
                printf("Ordem decrescente: %.2f %.2f %.2f \n", b, c, a);
            }else{
                printf("Ordem decrescente: %.2f %.2f %.2f \n", a, c, b);
            }

        }
        
        if(a == b && a == c){
            printf("Os numeros sao iguais. \n");
        }


    }

               /*--------------------------------------------------------*/

    if(i == 3){

        if(a != b && a != c){

            if(a > b && a > c){
                printf("Maior no meio: %.2f %.2f %.2f \n", b, a, c);
            }
            if(b > c && b > a){
                printf("Maior no meio: %.2f %.2f %.2f \n", a, b, c);
            }
            if(c > a && c > b){
                printf("Maior no meio: %.2f %.2f %.2f \n", b, c, a);
            }

        }
        if(a == b && a != c){

            if(a > c){
                printf("Maior no meio: %.2f %.2f %.2f \n", b, a, c);
            }else{
                printf("Maior no meio: %.2f %.2f %.2f \n", b, c, a);
            }

        }
        if(a == c && a != b){

            if(a > b){
                printf("Maior no meio: %.2f %.2f %.2f \n", b, a, c);
            }else{
                printf("Maior no meio: %.2f %.2f %.2f \n", a, b, c);
            }

        }
        if(b == c && a != c){

            if(c > a){
                printf("Maior no meio: %.2f %.2f %.2f \n", a, b, c);
            }else{
                printf("Maior no meio: %.2f %.2f %.2f \n", b, a, c);
            }

        }
        if(a == b && a == c){
            printf("Os numeros sao iguais. \n");
        }
    }
    
    
    
    return 0; 
}