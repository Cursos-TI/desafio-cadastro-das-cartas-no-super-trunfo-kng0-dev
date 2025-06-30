#include <stdio.h>

int main() {
    char estado;
    char cidade[50];
    int codigoCarta, populacao, numPntsTuristicos;
    float area, pib;

    
    printf("Informe a letra correspondente ao estado (letra A ate H): \n");
    scanf("%c", &estado);
    printf("Informe o número correspondente a cidade \n");
    scanf("%i", &codigoCarta);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Informe a população da cidade: \n");
    scanf("%i", &populacao);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos);


}