/*
10) Entrar com o salário de uma pessoa e imprimir o salário descontado do INSS segundo 
a tabela abaixo: 

    - menor ou igual a R$ 600,00 – isento
    - maior que R$ 600,00 e menor ou igual a R$ 1200,00 – 20%
    - maior que R$ 1200,00 e menor ou igual a R$2000,00 – 25%
    - maior que R$ 2000,00 – 30%
*/


#include <stdio.h> 

main(){

    float salario;
    printf("Digite o valor do seu salario: \n");
    scanf("%f", &salario);

    float desconto =0; 

    if(salario <= 600){
        desconto =0;
    }else if(salario > 600 & salario <= 1200){
        desconto = (salario * 20) / 100;
    }else if(salario > 1200 && salario <= 2000){
        desconto = (salario * 25) / 100;
    }else if(salario > 2000){
        desconto= (salario * 30) / 100;
    }

    printf("Valor final do salario: %.2f \n", (salario - desconto));

    return 0; 
}