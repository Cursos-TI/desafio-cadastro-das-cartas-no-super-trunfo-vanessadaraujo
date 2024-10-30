#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("SuperTrunfo países \n");
    //Variáveis a serem trabalhadas

    int codigo, populacao, pontosturisticos;
    char nome[50];
    float area;
    double pib;

    //Início do cadastro das cartas
    printf("Insira o nome da cidade:\n");
    scanf ("%s", &nome);
    
    printf("Cadastre um código para sua carta: \n");
    scanf("%d", &codigo);

    printf("Informe a população: \n");
    scanf(" %d", &populacao);

    printf("Qual a área? \n");
    scanf("%f", &area);

    printf("Qual o PIB? \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);


    return 0;
}
