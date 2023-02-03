/*
21. Faça  uma prova de matemática para crianças que estão aprendendo a somar 
números inteiros menores do que cem. Escolha números aleatórios entre 1 e 100, 
e mostre na tela a pergunta: qual é a soma de ”a”+ ”b”, onde ”a”e ”b” são os 
números aleatórios. Peça resposta. Faça cinco perguntas ao aluno, e mostre para 
ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main(){

    int num1=0, num2=0, acertos=0, erros=0, condicao=0; 
    while(condicao < 5){

        num1=0;
        num2=0;
        for(int i=0; i < 2; i++){

            if(num1 == 0){
                num1= rand() % 100;
            }else{
                num2= rand() % 50;
            }

        }

        int resposta;
        printf("Qual o valor da soma: %d + %d ? \n", num1, num2);
        scanf("%d", &resposta);

        if(resposta == (num1 + num2)){
            printf("Acertou! \n");
            acertos++; 
        }else{
            printf("Errou! \n");
            erros++;
        }

        condicao++;
    }

    printf("O aluno teve %d acertos e %d erros. \n", acertos, erros);

    return 0;
}