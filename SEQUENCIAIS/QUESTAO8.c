/*

8) Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, 
utilizando-se um automóvel que faz X Km/litro. Para obter o cálculo, o usuário 
deverá fornecer o tempo gasto da viagem e a velocidade média durante a
mesma. Desta forma, será possível obter a distância percorrida com a fórmula:
DISTÂNCIA = TEMPO * VELOCIDADE.

Sabendo o valor da distância, basta calcular a quantidade de litros de combustível 
utilizada na viagem com a
fórmula: LITROS_USADOS = DISTÂNCIA / X. O programa deverá apresentar os valores

*/

#include <stdio.h> 

main(){

    float kmL;
    printf("Digite quantos km/Litro o carro faz: \n");
    scanf("%f", &kmL);
    
    float tempo; 
    printf("Digite o tempo gasto na viagem: \n");
    scanf("%f", &tempo);

    float velocidade;
    printf("Digite a velocidade media durante a viagem: \n");
    scanf("%f", &velocidade);

    float distancia= tempo * velocidade; 
    
    printf("A distancia percorrida foi: %.2f \n", distancia);

    float qtdL= distancia / kmL; 

    printf("Foram utilizados %.2f litros na viagem. \n", qtdL);

    return 0;
}