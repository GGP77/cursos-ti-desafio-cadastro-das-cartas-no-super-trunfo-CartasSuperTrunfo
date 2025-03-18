#include <stdio.h>

int main(){
    char estado[50], codigocarta[30], cidade[50];
    int populacao;
    int pontosturisticos;
    float area, PIB;

    print("Cartas Super Trunfo");


    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código: \n");
    scanf("%s", &codigocarta);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    print("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);


    return 0;
    
}