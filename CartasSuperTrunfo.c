#include <stdio.h>
#include <time.h>
#include <stdlib.h>


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
    unsigned long int POPULAÇÃO = 630932;
    float ÁREA_KM² = 181.0;
    float PIB = 18.4;
    int NÚMERO_PONTOS_TURÍSTICOS = 32;
    float DENSIDADE_POPULACIONAL = POPULAÇÃO/ÁREA_KM²;
    float PIB_PER_CAPITA = PIB/ (int) POPULAÇÃO*1000000000;
    DENSIDADE_POPULACIONAL = 1/DENSIDADE_POPULACIONAL;
    float SUPER_PODER = POPULAÇÃO + ÁREA_KM² + PIB + NÚMERO_PONTOS_TURÍSTICOS + DENSIDADE_POPULACIONAL + PIB_PER_CAPITA;

    //CARTA 2
    char ESTADO2 [20] = "ALAGOAS";
    char CODIGO_ESTADO2 [20] = "A02";
    char NOME_CIDADE2 [20] = "MACEIÓ";
    unsigned long int POPULAÇÃO2 = 994952;
    float ÁREA_KM²2 = 509.6;
    float PIB2 = 27.48;
    int NÚMERO_PONTOS_TURÍSTICOS2 = 40;
    float DENSIDADE_POPULACIONAL2 = POPULAÇÃO2/ÁREA_KM²2;
    float PIB_PER_CAPITA2 = PIB2/ (int) POPULAÇÃO2*1000000000;
    DENSIDADE_POPULACIONAL2 = 1/DENSIDADE_POPULACIONAL2;
    float SUPER_PODER2 = POPULAÇÃO2 + ÁREA_KM²2 + PIB2 + NÚMERO_PONTOS_TURÍSTICOS2 + DENSIDADE_POPULACIONAL2 + PIB_PER_CAPITA2;

    int escolhaatributo;

    printf("*** Jogo Super Trunfo ***\n");
    printf("Escolha uma opção:\n");
    printf("1. POPULAÇÃO\n");
    printf("2. ÁREA KM²\n");
    printf("3. PIB\n");
    printf("4. NÚMERO_PONTOS_TURÍSTICOS\n");
    printf("5. DENSIDADE_POPULACIONAL\n");
    printf("6. PIB_PER_CAPITA\n");
    printf("7. SUPER_PODER\n");
    scanf("%d", &escolhaatributo);



    switch (escolhaatributo)
{
    case 1:
        printf("População:\n");
        printf("Carta 1 (%s): %lu\n", NOME_CIDADE, POPULAÇÃO);
        printf("Carta 2 (%s): %lu\n", NOME_CIDADE2, POPULAÇÃO2);
        if (POPULAÇÃO > POPULAÇÃO2)
            printf("Carta 1 venceu!\n");
        else if (POPULAÇÃO < POPULAÇÃO2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;
        
    case 2:
        printf("Área:\n");
        printf("Carta 1 (%s): %.2f km²\n", NOME_CIDADE, ÁREA_KM²);
        printf("Carta 2 (%s): %.2f km²\n", NOME_CIDADE2, ÁREA_KM²2);
        if (ÁREA_KM² > ÁREA_KM²2)
            printf("Carta 1 venceu!\n");
        else if (ÁREA_KM² < ÁREA_KM²2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("PIB:\n");
        printf("Carta 1 (%s): %.2f bilhões\n", NOME_CIDADE, PIB);
        printf("Carta 2 (%s): %.2f bilhões\n", NOME_CIDADE2, PIB2);
        if (PIB > PIB2)
            printf("Carta 1 venceu!\n");
        else if (PIB < PIB2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Número de Pontos Turísticos:\n");
        printf("Carta 1 (%s): %d\n", NOME_CIDADE, NÚMERO_PONTOS_TURÍSTICOS);
        printf("Carta 2 (%s): %d\n", NOME_CIDADE2, NÚMERO_PONTOS_TURÍSTICOS2);
        if (NÚMERO_PONTOS_TURÍSTICOS > NÚMERO_PONTOS_TURÍSTICOS2)
            printf("Carta 1 venceu!\n");
        else if (NÚMERO_PONTOS_TURÍSTICOS < NÚMERO_PONTOS_TURÍSTICOS2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Densidade Populacional (invertida):\n");
        printf("Carta 1 (%s): %.4f\n", NOME_CIDADE, DENSIDADE_POPULACIONAL);
        printf("Carta 2 (%s): %.4f\n", NOME_CIDADE2, DENSIDADE_POPULACIONAL2);
        if (DENSIDADE_POPULACIONAL < DENSIDADE_POPULACIONAL2)
            printf("Carta 1 venceu!\n");
        else if (DENSIDADE_POPULACIONAL > DENSIDADE_POPULACIONAL2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("PIB per Capita:\n");
        printf("Carta 1 (%s): %.2f\n", NOME_CIDADE, PIB_PER_CAPITA);
        printf("Carta 2 (%s): %.2f\n", NOME_CIDADE2, PIB_PER_CAPITA2);
        if (PIB_PER_CAPITA > PIB_PER_CAPITA2)
            printf("Carta 1 venceu!\n");
        else if (PIB_PER_CAPITA < PIB_PER_CAPITA2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 7:
        printf("Super Poder:\n");
        printf("Carta 1 (%s): %.2f\n", NOME_CIDADE, SUPER_PODER);
        printf("Carta 2 (%s): %.2f\n", NOME_CIDADE2, SUPER_PODER2);
        if (SUPER_PODER > SUPER_PODER2)
            printf("Carta 1 venceu!\n");
        else if (SUPER_PODER < SUPER_PODER2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção Inválida\n");
        break;
}
    
   

    return 0;
}
