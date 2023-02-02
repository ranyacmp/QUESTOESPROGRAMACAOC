/*
5) Entrar com nota da AV1 e nota da AV2 de um aluno. Imprimir: nota de cada AV, 
média e uma das mensagens: Aprovado , Reprovado ou AV3 (a média é 6.0 para aprovação).  

    - Vai para AV3 se média de AV1 e AV2 for menor que 6.
    - A AV3 substitui a menor nota
*/


#include <stdio.h>

main(){

    float av1;
    printf("Digite a nota da av1: \n");
    scanf("%f", &av1);

    float av2;
    printf("Digite a nota da av2: \n");
    scanf("%f", &av2);


   float media= (av1 + av2) / 2;

   printf("NOTA AV1: %.2f", av1);
   printf("NOTA AV2: %.2f", av2);
   printf("MEDIA: %.2f", media);

   if(media < 6){

        printf("REPROVADO. \n");

        if(av1 > av2){
            printf("A av3 ira substituir a nota da av2. \n ");
        }else if(av2 > av1){
            printf("A av3 ira substituir a nota da av1. \n ");
        }else{
            printf("A av3 substituira qualquer uma das notas. \n ");
        }

   }else{

        printf("APROVADO. \n"); 

   }

    return 0; 

}