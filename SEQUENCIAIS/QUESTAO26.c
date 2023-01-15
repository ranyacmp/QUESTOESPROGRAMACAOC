/*
26) Escreva um programa para um terminal de banco, que recebe um valor inteiro R e determina o número de 
notas de 100, 50, 10, 5 e 1 reais necessárias para pagar a quantia R. Faça de forma que o número de notas 
usado seja o menor possível. 
    
    Exemplo: para R ⇒ 45 deve dar: 
    
    0 notas de 100
    
    0 notas de 50
    
    4 notas de 10
    
    1 notas de 5
    
    0 notas de 1
    
    ps: lembre-se das propriedades de divisão e de resto! 

        
        Exemplo: para R ⇒ 45 deve dar: 
        
        0 notas de 100 → 45/100 = 0;  45%100 = 45
        0 notas de 50   → 45/50 = 0; 45%50 = 45
        4 notas de 10   → 45/10 = 4; 45%10 = 5
        1 notas de 5     → 5/5 = 1; 5%5 = 0
        0 notas de 1    → 0 lá de cima

        Exemplo: para R ⇒ 13 deve dar: 

        0 notas de 100 → 13/100 = 0;  13%100 = 13
        0 notas de 50   → 13/50 = 0; 13%50 = 13
        1 notas de 10   → 13/10 = 4; 13%10 = 3
        0 notas de 5     → 3/5 = 0; 3%5 = 3
        3 notas de 1    → 3 lá de cima
*/

#include <stdio.h>

main(){

    int valor; 
    printf("Digite um valor em reai: \n");
    scanf("%d", &valor);

   int cem = valor / 100;
   int rescem = valor % 100;

   int cinquenta= rescem / 50; 
   int rescinquenta= rescem % 50;

   int dez= rescinquenta / 10;
   int resdez= rescinquenta % 10;

   int cinco= resdez / 5;
   int rescinco= resdez % 5;


    printf("%d notas de 100 \n", cem);
    printf("%d notas de 50 \n",cinquenta);
    printf("%d notas de 10 \n", dez);
    printf("%d notas de 5 \n", cinco);
    printf("%d notas de 1 \n", rescinco);
    
    return 0;
}