#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

unsigned int populacao, pontosTuristicos;
float area, pib;
char confirmacao[3];

printf("Digite a população total da cidade: ");
scanf("%d", &populacao);

printf("Digite a área total da cidade em km²: ");
scanf("%f", &area);

printf("Digite o PIB da cidade em reais: R$ ");
scanf("%f", &pib);

printf("Digite o número de pontos turisticos da cidade: ");
scanf("%d", &pontosTuristicos);

printf("Criar carta? (sim/não) \n");
scanf("%s", &confirmacao);

printf("\033[2J");

float densidade = populacao / area;
float pibPerCapta = pib / populacao;

printf("Carta A01 \n");
printf("\n");
printf("População: %d \n", populacao);
printf("Área: %.2f \n", area);
printf("PIB: %.2f \n", pib);
printf("Número de Pontos Turisticos: %d \n", pontosTuristicos);
printf("Densidade Populacional: %.2f \n", densidade);
printf("PIB per Capta: %.2f \n", pibPerCapta);
printf("\n");

    return 0;
}
