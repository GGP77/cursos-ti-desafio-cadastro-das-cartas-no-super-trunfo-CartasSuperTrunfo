#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Cartas Super Trunfo! \n");

    int pontosturisticos;
    char cidade[50], estado[30], codigo[10];
    float area, pib, populacao;

printf("Informe o Estado: \n");
scanf("%s", &estado);

printf("Informe o Código da Carta: \n");
scanf("%s", &codigo);

printf("Informe o Nome da Cidade: \n");
scanf("%s", &cidade);

printf("Informe a População da Cidade: \n");
scanf("%f", &populacao);

printf("Informe a Área da Cidade: \n");
scanf("%f", &area);

printf("Informe o PIB da Cidade: \n");
scanf("%f", &pib);

printf("Informe o Número de Pontos Turísticos da Cidade: \n");
scanf("%i", &pontosturisticos);

printf("Estado: %s \n", estado);
printf("Código da Carta: %s \n", codigo);
printf("Nome da Cidade: %s \n", cidade);
printf("População: %.3f \n", populacao);
printf("Área: %.3f \n", area);
printf("PIB: %.3f \n", pib);
printf("Pontos Turísticos: %i \n", pontosturisticos);

    int Pontosturisticos, Populacao;
    char Cidade[50], Estado[30], Codigo[10];
    float Area, Pib;

printf("Informe o Estado: \n");
scanf("%s", &Estado);

printf("Informe o Código da Carta: \n");
scanf("%s", &Codigo);

printf("Informe o Nome da Cidade: \n");
scanf("%s", &Cidade);

printf("Informe a População da Cidade: \n");
scanf("%d", &Populacao);

printf("Informe a Área da Cidade: \n");
scanf("%f", &Area);

printf("Informe o PIB da Cidade: \n");
scanf("%f", &Pib);

printf("Informe o Número de Pontos Turísticos da Cidade: \n");
scanf("%i", &Pontosturisticos);

printf("Estado: %s \n", Estado);
printf("Código da Carta: %s \n", Codigo);
printf("Nome da Cidade: %s \n", Cidade);
printf("População: %d \n", Populacao);
printf("Área: %.2f \n", Area);
printf("PIB: %.3f \n", Pib);
printf("Pontos Turísticos: %i \n", Pontosturisticos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
