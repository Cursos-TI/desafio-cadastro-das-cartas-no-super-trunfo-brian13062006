#include <stdio.h>

int main (){
    char Estado1 = 'A';
    char Codigo1[5] = "A01";
    char Cidade1[10] = "Bahia";
    int Populacao1 = 14140000;
    float Area1 = 564.760; // km²
    float PIB1 = 114; // bilhões de reais
    int PontosTuristicos1 = 13;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n\n", PontosTuristicos1);


    char Estado2 = 'B';
    char Codigo2[5] = "B02";
    char Cidade2[10] = "Paraná";
    int Populacao2 = 11440000;
    float Area2 = 199.315; // km²
    float PIB2 = 177.8; // bilhões de reais
    int PontosTuristicos2 = 18;

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

}
