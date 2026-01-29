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

    //Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [45];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;

    //Entrada de dados carta 1
    printf("--- INSIRA AS INFORMAÇÕES DA CARTA 1 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (A01, B03): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTur1);
    
    //Entrada de dados carta 2
    printf("--- INSIRA AS INFORMAÇÕES DA CARTA 2 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (A01, B03): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTur2);
    


}