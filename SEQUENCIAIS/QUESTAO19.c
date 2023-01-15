/*

19) Faça um programa que leia os valores de A, B e C, calcule o “delta” e 
classifique a equação do 2o. grau. Calcule e escreva as raízes da equação, se 
houverem ou uma mensagem.

*/

#include <stdio.h> 
#include <math.h>

main(){

    float a; 
    printf("Digite o valor de a: \n");
    scanf("%f", &a);

    float b; 
    printf("Digite o valor de b: \n");
    scanf("%f", &b);

    float c;
    printf("Digite o valor de c: \n");
    scanf("%f", &c);

    if( a != 0 && b != 0 && c != 0){
        printf("Essa eh uma equacao completa. \n");
    }else if(a != 0 && (b == 0 || c == 0)){
        printf("Essa equacao eh incompleta. \n");
    }

    float delta=(pow((b),2)) - (4 * (a) * (c));

    float raizes;
    if(delta < 0){

        printf("Nao ha raiz real. \n");

    }else if( delta > 0){

        raizes = (-(b) + (sqrt(delta))) / 2 * a ;
        printf("Raiz x1= %.2f \n", raizes);
        raizes = (-(b) - sqrt(delta)) / 2 * a ;
        printf("Raiz x2 = %.2f \n", raizes);


    }else if(delta == 0){

        raizes = (-(b) + sqrt(delta)) / 2 * a ;
        printf("Raiz = %.2f \n", raizes);

    }
    
    return 0;
}