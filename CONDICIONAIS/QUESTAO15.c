/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com 
o tipo de funcionário, conforme a tabela abaixo. Faça um programa que leia o salário e o 
tipo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na 
tabela, ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário 
e a diferença.
    CODIGO     TIPO    PERCENTUAL 
     101        1        10%
     102        2        20%
     103        3        30%
*/

#include <stdio.h> 

main(){
    
    int tipo;
    printf("Digite o tipo do funcionairo: \n");
    scanf("%d", &tipo);

    float salario; 
    printf("Digite o valor do salario: \n");
    scanf("%f", &salario);


    float aumento= 0; 

    if(tipo == 1){
        aumento = (salario * 10) / 100; 
    }else if(tipo == 2){
        aumento = (salario * 20) / 100; 
    }else if(tipo == 3){
        aumento = (salario * 30) / 100; 
    }else{
        aumento = (salario * 40) / 100; 
    }

    printf("Salario final: %.2f \n", (salario + aumento));

    return 0; 
}