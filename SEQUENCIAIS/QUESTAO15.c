/*
15) Entrar com nota da AV1 e nota da AV2 de um aluno. Imprimir: nota de cada AV, média e uma das mensagens: AP ,
RP ou AV3 (a média é 6.0 para aprovação).
*/

#include <stdio.h>

main(){


    float av1; 
    printf("Digite a nota da av1: \n");
    scanf("%f", &av1);

    float av2;
    printf("Digite a nota da av2: \n");
    scanf("%f", &av2);

    float media;
    if( av1 > 0 && av2 > 0){
        printf("Nota av1: %.2f \n Nota av2: %.2f \n", av1, av2);
        media = (av1 + av2) / 2;
        printf("Media: %.2f \n", media);

        if(media > 6){
            printf("Aprovado. \n");
        }else{
            printf("Reprovado. \n");
        }


    }else{
        printf("Nota av1: %.2f \n Nota av2: %.2f \n", av1, av2);
        printf("Voce precisara fazer av3. \n");
    }

    return 0; 
}