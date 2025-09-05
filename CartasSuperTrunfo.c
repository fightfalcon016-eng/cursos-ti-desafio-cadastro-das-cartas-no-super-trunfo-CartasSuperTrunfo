#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //CARTA 1
    char ESTADO [20] = "SERGIPE";
    char CODIGO_ESTADO [20] = "A01";
    char NOME_CIDADE [20] = "ARACAJU";
    float POPULAÇÃO = 630.932;
    int ÁREA_KM² = 181.0;
    float PIB = 18.4;
    int NÚMERO_PONTOS_TURÍSTICOS = 32;


    //CARTA 2
    char ESTADO2 [20] = "ALAGOAS";
    char CODIGO_ESTADO2 [20] = "A02";
    char NOME_CIDADE2 [20] = "MACEIÓ";
    float POPULAÇÃO2 = 994.952;
    float ÁREA_KM²2 = 509.6;
    float PIB2 = 27.48;
    int NÚMERO_PONTOS_TURÍSTICOS2 = 40;

    //IMPRESSÃO DA CARTA 1
    printf("ESTADO: %s\n", ESTADO);
    printf("CÓDIGO DO ESTADO: %s\n", CODIGO_ESTADO);
    printf("NOME DA CIDADE: %s\n", NOME_CIDADE);
    printf("POPULAÇÃO: %.3f\n", POPULAÇÃO);
    printf("ÁREA EM KM²: %.1f\n", ÁREA_KM²);
    printf("PIB: %.2f BILHÕES\n", PIB);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", NÚMERO_PONTOS_TURÍSTICOS);

    printf(" \n"); //Linha para separar as informações das duas cartas

    //IMPRESSÃO DA CARTA 2
    printf("ESTADO: %s\n", ESTADO2);
    printf("CÓDIGO DO ESTADO: %s\n", CODIGO_ESTADO2);
    printf("NOME DA CIDADE: %s\n", NOME_CIDADE2);
    printf("POPULAÇÃO: %.3f\n", POPULAÇÃO2);
    printf("ÁREA EM KM²: %.1f\n", ÁREA_KM²2);
    printf("PIB: %.2f BILHÕES\n", PIB2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", NÚMERO_PONTOS_TURÍSTICOS2);

    return 0;
}
