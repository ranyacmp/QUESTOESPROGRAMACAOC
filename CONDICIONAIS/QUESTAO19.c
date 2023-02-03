/*
19. Leia a distância em Km e a quantidade de litros de gasolina consumidos 
por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem 
de acordo com a tabela abaixo:

menor que	8	Venda o carro!
entre	8 e 14	Econômico
maior que	14	Super econônico
*/

#include <stdio.h> 

main(){

    float distancia; 
    printf("Digite a diatancia percorrida: \n");
    scanf("%f", &distancia);

    float litros;
    printf("Digite a quantidade de litros de gasolina consumidos: \n");
    scanf("%f",&litros);

    float consumo = distancia / litros; 

    if(consumo < 8){
        printf("Venda o carro ! \n");
    }else if(consumo >= 8 && consumo <= 14){
        printf("Economico. \n");
    }else if(consumo > 14){
        printf("Super economico. \n");
    }

    return 0; 

}