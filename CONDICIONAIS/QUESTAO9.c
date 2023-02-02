/*
9) Faça um programa que receba o salário de um trabalhador e o valor da prestação de um empréstimo, 
se a prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: 
Empréstimo concedido
*/

#include <stdio.h>


main(){

    float salario; 
    printf("Digite o valor do salario: \n ");
    scanf("%f", &salario);

    float emprestimo;
    printf("Digite o valor do emprestimo: \n ");
    scanf("%f", &emprestimo);

    float percent= (salario * 20) / 100;

    if(emprestimo > percent){
        printf("Emprestimo nao concedido. \n");
    }else{
        printf("Emprestimo concedido. \n");
    }

    return 0;
}