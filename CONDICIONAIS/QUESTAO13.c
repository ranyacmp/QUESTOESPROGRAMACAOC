/*
13.  Faça um programa que leia os valores de A, B e C, calcule o “delta” da equação. 
Classifique a equação em completa ou incompleta, além disso diga se existe solução. 
Se não houver, exiba uma mensagem de erro. 
 
    - A equação é incompleta se alguns de seus coeficientes (a,b ou c) são iguais a 0
    - Se Δ = 0 existe uma raiz real. Imprima a raiz e a mensagem "Raiz  única" e a raiz.
    - Se Δ < 0 não existe raiz real. Imprima a mensagem "Não existe raiz".
*/

#include <stdio.h> 
#include <math.h> 

main(){

    float a;
    printf("Digite um valor para a: \n");
    scanf("%f", &a);

    float b;
    printf("Digite um valor para b: \n");
    scanf("%f", &b);

    float c; 
    printf("Digite um valor para c: \n");
    scanf("%f", &c);


    float delta=0, raiz=0; 

    if(a == 0 || b == 0 || c == 0){
        printf("Equacao incompleta. \n");
        return;
    }else{
        delta= (pow(b, 2) * (4 * (a) * (c)));
        if(delta == 0){
            printf("Raiz unica. \n");
            raiz= ((-b) + delta) / (2 * a); 
            pintf("Raiz: %.2f", raiz);
        }else if(delta < 0){
            printf("Nao existe raiz real. \n"); 
        }
    }



    return 0; 
}