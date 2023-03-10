/*
28) Você resolveu dar uma força para a NASA, que deseja calcular o peso das pessoas em diferentes 
planetas do sistema solar. (Isso vai ter importantes consequências na colonização dos planetas pela
humanidade: os gordinhos vão preferir planetas onde baixem de peso, os magrinhos vão querer o contrário). 
Escreva um programa que recebe o peso de uma pessoa (em newtons) e calcula o novo peso nos corpos celestes, 
de acordo com as constantes gravitacionais de cada planeta (estas constantes estão normalizadas em relação 
à constante da Terra), dadas abaixo:
    
    Corpo celeste Fator de conversão
    Mercúrio 0.3649337410
    Vênus 0.9041794087
    Marte 0.3812436289
    Lua 0.1651376146
    Terra 1
    Júpiter 2.6513761467
    Saturno 1.1386340468
    Urano 1.0693170234
    Netuno 1.3506625891
    Plutão 0.2252803261
    
    Depois de fazer as conversões, imprima o quanto as pessoas pesariam se estivessem em cada planeta.
*/

#include <stdio.h> 

main(){

    float peso;
    printf("Digite um peso em newtons: \n");
    scanf("%f", &peso);

    printf("Peso em Mercurio: %.2f \n", (peso * 0.3649337410));
    printf("Peso em Venus: %.2f \n", (peso * 0.9041794087));
    printf("Peso em Marte: %.2f \n", (peso * 0.3812436289));
    printf("Peso na Lua: %.2f \n", (peso * 0.1651376146));
    printf("Peso em Jupiter: %.2f \n", (peso * 2.6513761467));
    printf("Peso em Saturno: %.2f \n", (peso * 1.1386340468));
    printf("Peso em Urano: %.2f \n", (peso * 1.0693170234));
    printf("Peso em Netuno: %.2f \n", (peso * 1.3506625891));
    printf("Peso em Plutao: %.2f \n", (peso * 0.2252803261));


    return 0; 
}