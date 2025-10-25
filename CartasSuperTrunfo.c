#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //variáveis da carta 1
    char estado, codigo[4], cidade[30];  
    int populacao, pontos_turisticos;
    float area, pib;

    //variáveis da carta 2
    char estado2, codigo2[4], cidade2[30];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
  
  // Área para entrada de dados
    // Dados para a carta 1

    printf("Digite a letra inicial do estado da cidade 1: ");
    scanf(" %c", &estado);
    printf("Digite o código da cidade 1 (inicial do estado + 2 numeros): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade 1: ");
    scanf(" %s", cidade);
    getchar(); // Limpar o buffer do teclado
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade 1: "); 
    scanf("%d", &pontos_turisticos);
  

    // Dados para a carta 2
    printf("\nDigite a letra inicial do estado da cidade 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade 2 (inicial do estado + 2 numeros): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf(" %s", cidade2);
    getchar(); // Limpar o buffer do teclado
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade 2: "); 
    scanf("%d", &pontos_turisticos2); 

         
  // Área para exibição dos dados da cidade
    printf("\n--- Carta da Cidade 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);  
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\n--- Carta da Cidade 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
} 
