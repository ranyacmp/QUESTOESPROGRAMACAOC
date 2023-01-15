/*
5) Entrar com o raio de um círculo, calcular e imprimir seu perímetro e sua área. OBS: P = 2  raio e A =  raio2
*/

#include <stdio.h> 


main(){

    float raio; 
    printf("Digite o raio de um circulo: \n");
    scanf("%f", &raio);

    // Área circulo: pir²

    float area= pow((3.14 * raio), 2);

    // Perímetro circulo 2piR

    float perimetro= 2 * 3.14 * raio; 

    printf("Area do circulo: %.2f \n Perimetro do circulo : %.2f \n", area, perimetro);

    return 0;
}