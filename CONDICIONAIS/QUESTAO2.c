/*
2) Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens: 
Carioca, Paulista, mineiro, outros estados
- Para esse programa, assuma que os estados são representados pela sua letra inicial
*/

#include <stdio.h>
#include <string.h>

main(){

    char estado[1];

    printf("Digite a sigla do seu estado: \n");
    scanf("%s", estado);

    if(strcmp(estado, "AC") == 0 || strcmp(estado, "ac") == 0 ){

        printf("Acre. \n");
        
    }
    if(strcmp(estado, "AL") == 0 || strcmp(estado, "al") == 0 ){

        printf("Alagoas. \n");
        
    }
    if(strcmp(estado, "AP") == 0 || strcmp(estado, "ap") == 0 ){

        printf("Amapa. \n");
        
    }
    if(strcmp(estado, "AM") == 0 || strcmp(estado, "am") == 0 ){

        printf("Amazonas. \n");
        
    }
    if(strcmp(estado, "BA") == 0 || strcmp(estado, "ba") == 0 ){

        printf("Bahia. \n");
        
    }
    if(strcmp(estado, "CE") == 0 || strcmp(estado, "ce") == 0 ){

        printf("Ceara. \n");
        
    }
    if(strcmp(estado, "DF") == 0 || strcmp(estado, "df") == 0 ){

        printf("Brasilia. \n");
        
    }
    if(strcmp(estado, "ES") == 0 || strcmp(estado, "es") == 0 ){

        printf("Espirito Santo. \n");
        
    }
    if(strcmp(estado, "GO") == 0 || strcmp(estado, "go") == 0 ){

        printf("Goias. \n");
        
    }
    if(strcmp(estado, "MA") == 0 || strcmp(estado, "ma") == 0 ){

        printf("Maranhao. \n");
        
    }
    if(strcmp(estado, "MT") == 0 || strcmp(estado, "mt") == 0 ){

        printf("Mato Grosso. \n");
        
    }
    if(strcmp(estado, "MS") == 0 || strcmp(estado, "ms") == 0 ){

        printf("Mato Grosso do Sul. \n");
        
    }
    if(strcmp(estado, "MG") == 0 || strcmp(estado, "mg") == 0 ){

        printf("Minas Gerais. \n");
        
    }
    if(strcmp(estado, "PA") == 0 || strcmp(estado, "pa") == 0 ){

        printf("Para. \n");
        
    }
    if(strcmp(estado, "PB") == 0 || strcmp(estado, "pb") == 0 ){

        printf("Paraiba. \n");
        
    }
    if(strcmp(estado, "PR") == 0 || strcmp(estado, "pr") == 0 ){

        printf("Parana. \n");
        
    }
    if(strcmp(estado, "PE") == 0 || strcmp(estado, "pe") == 0 ){

        printf("Pernambuco. \n");
        
    }
    if(strcmp(estado, "PI") == 0 || strcmp(estado, "pi") == 0 ){

        printf("Piaui. \n");
        
    }
    if(strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0 ){

        printf("Rio de Janeiro. \n");
        
    }
    if(strcmp(estado, "RN") == 0 || strcmp(estado, "rn") == 0 ){

        printf("Rio Grande do Norte. \n");
        
    }
    if(strcmp(estado, "RS") == 0 || strcmp(estado, "rs") == 0 ){

        printf("Rio Grande do Sul. \n");
        
    }
    if(strcmp(estado, "RO") == 0 || strcmp(estado, "ro") == 0 ){

        printf("Rondonia. \n");
        
    }
    if(strcmp(estado, "RR") == 0 || strcmp(estado, "rr") == 0 ){

        printf("Roraima. \n");
        
    }
    if(strcmp(estado, "SC") == 0 || strcmp(estado, "sc") == 0 ){

        printf("Santa Catarina. \n");
        
    }
    if(strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0 ){

        printf("Sao Paulo. \n");
        
    }
    if(strcmp(estado, "SE") == 0 || strcmp(estado, "se") == 0 ){

        printf("Sergipe. \n");
        
    }
    if(strcmp(estado, "TO") == 0 || strcmp(estado, "to") == 0 ){

        printf("Tocantins. \n");
        
    }

   


    return 0;
}