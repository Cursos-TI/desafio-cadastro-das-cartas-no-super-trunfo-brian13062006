#include <stdio.h>

int main (){
    char Estado1 = 'A';
    char Codigo1[5] = "A01";
    char Cidade1[10] = "Bahia";
    int Populacao1 = 14140000;
    float Area1 = 564.760; // km²
    double PIB1 = 34900000000.0; // bilhões de reais
    int PontosTuristicos1 = 13;
    float Densidadepopulacional1 = Populacao1 / Area1; // hab/km²
    double PIBpercapita1 = PIB1 / Populacao1; // reais

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1 / 100000000.0);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n\n", PIBpercapita1);


    char Estado2 = 'B';
    char Codigo2[5] = "B02";
    char Cidade2[10] = "Paraná";
    int Populacao2 = 11440000;
    float Area2 = 199.315; // km²
    double PIB2 = 66565000000.0; // bilhões de reais
    int PontosTuristicos2 = 18;
    float Densidadepopulacional2 = Populacao2 / Area2; // hab/km²
    double PIBpercapita2 = PIB2 / Populacao2; // reais

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2 / 100000000.0);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);

    return 0;

}
