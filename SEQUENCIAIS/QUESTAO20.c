/*
20) Zé do Peixe, homem de bem, comprou um microcomputador para controlar o rendimento diário 
de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo  
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 5,00 
por quilo excedente. Zé precisa que você elabore um código em C que leia a variável P 
(peso de peixes) e verifique se há excesso. Se houver, guardar este valor na variável E (excesso), 
e na variável M o valor da multa que Zé deverá pagar. Caso contrário mostrar tais variáveis 
com conteúdo zero.
*/

#include <stdio.h>

main(){

    float p; 
    printf("Digite a quantidade da pesca no dia em kilos: \n");
    scanf("%f", &p);

    int e=0;
    float m=0;
    if(p > 50){
        e= p - 50; 
        m = e * 5;
        printf("Excesso: %d \n", e);
        printf("Valor da multa: %.2f \n", m);
    }else{
        printf("Nao ha multas. \n");
        printf("E = %d M = %.0f. \n",e, m);
    }


    return 0;
}