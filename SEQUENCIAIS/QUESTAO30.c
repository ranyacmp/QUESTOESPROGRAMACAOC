/*
30. Se você estiver a uma altura h (em metros) sobre o nível do mar, sua distância d (também
em metros) até o horizonte é dada aproximadamente pela fórmula
    
    $$
    d = \sqrt{h^2 + 2rh}
    $$
    
    onde r é o raio da Terra (cerca de 6378150 metros)
    
    - Escreva um programa que recebe uma altura h e determina a que distância está o horizonte, 
    sabendo que em C a função que calcula raízes quadradas se chama sqrt() e para usá-la você 
    tem que usar a biblioteca math.h.
        
        [Alturas de alguns locais interessantes:](https://www.notion.so/f91b7434150544578380437014911bdd)
*/


#include <stdio.h>

main(){
    
    float h;
    printf("Digite uma altura: \n");
    scanf("%f", &h);

    float d= sqrt((pow(h, 2)) + (2 * 6378150 * h) );

    printf("Esta a %.2f do horizonte. \n", d);


    return 0;
}