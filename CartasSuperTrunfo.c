#include <stdio.h>

int main() {
    int codigoCarta1, codigoCarta2, populacao1, populacao2, numPntsTuristicos1, numPntsTuristicos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1,densidadePopulacional2, pibPerCapita1,pibPerCapita2;
    
    printf("Carta 01:\n"); //insere as informações da primeira carta
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos1);
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("Carta 02:"); //insere as informações da segunda carta
    printf("Informe a população da cidade: \n");
    scanf("%i", &populacao2);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos2);
    densidadePopulacional2  = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n\nCarta 1:\nEstado: A\nCódigo: A01\nNome da Cidade: Belo Horizonte\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %f\nPIB per Capita: %f\n\nCarta 2:\nEstado: B\nCódigo: B03\nNome da Cidade: Ilhéus\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %f\nPIB per Capita: %f\n\n", populacao1, area1, pib1, numPntsTuristicos1,densidadePopulacional1,pibPerCapita1, populacao2, area2, pib2, numPntsTuristicos2,densidadePopulacional2,pibPerCapita2 ); //disponibiliza os quadros com as informações das cartas
}
