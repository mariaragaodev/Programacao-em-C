#include <stdio.h>

int main (){
    //Carta 1
    char estado1;
    char codigo1 [4];
    char cidade1 [45];
    int populacao1;
    float area1;
    float pib1;
    int pontosTur1;
    float densidadePop1;
    float pibCapita1;

    //Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [45];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;
    float densidadePop2;
    float pibCapita2;

    //Entrada de dados carta 1
    printf("--- INSIRA AS INFORMAÇÕES DA CARTA 1 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur1);
    
    //Entrada de dados carta 2
    printf("\n--- INSIRA AS INFORMAÇÕES DA CARTA 2 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTur2);
    
    densidadePop1 = populacao1/area1;
    pibCapita1 = pib1/populacao1;
    densidadePop2 = populacao2/area2;
    pibCapita2 = pib2/populacao2;

    printf("\n-----------------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTur1);
    printf("Densidade Populacional: %.2f\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibCapita1);

    printf("\n-----------------------------\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTur2);
    printf("Densidade Populacional: %.2f\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibCapita2);

    return 0;
}