/*
16. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são 
    - Ter pelo menos 65 anos,
    - Ou ter trabalhado pelo menos 30 anos,
    - Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include <stdio.h> 

main(){
    
    int tempo; 
    printf("Digite o tempo que voce trabalhou: \n");
    scanf("%d", &tempo);

    int idade; 
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 65 || tempo >= 30){
        printf("Voce ja pode se aposentar. \n");
    }else if(idade >= 60 || tempo >= 25){
        printf("Voce ja pode se aposentar. \n");
    }else{
        printf("Voce ainda nao pode se aposentar. \n");
    }


    return 0; 
}