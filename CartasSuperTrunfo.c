#include <stdio.h>

int main() {
    int codigoCarta1, codigoCarta2, populacao1, populacao2, numPntsTuristicos1, numPntsTuristicos2;
    float area1, area2, pib1, pib2;
    
    printf("Carta 01:\n");
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos1);

    printf("Carta 02:");
    printf("Informe a população da cidade: \n");
    scanf("%i", &populacao2);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos2);


    printf("\n\n555555555Carta 1:\nEstado: A\nCódigo: A01\nNome da Cidade: Belo Horizonte\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\nCarta 2:\nEstado: B\nCódigo: B03\nNome da Cidade: Ilhéus\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\n", populacao1, area1, pib1, numPntsTuristicos1,populacao2, area2, pib2, numPntsTuristicos2 );
}
