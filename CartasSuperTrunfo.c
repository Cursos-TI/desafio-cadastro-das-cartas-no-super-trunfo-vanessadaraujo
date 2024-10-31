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
    
    printf("SuperTrunfo países \n \n");
    //Variáveis a serem trabalhadas

    int populacao, pontosturisticos;
    char pais[50], estado[50], cidade[50], codigo[50];
    float area, pib;

    //Início do cadastro das cartas

    printf("Vamos cadastrar o país! \n");    
    printf("Insira o nome do país: \n");
    scanf("%s", &pais);

    printf("Agora, vamos cadastrar o estado! \n");    
    printf("Insira o nome do estado: \n");
    scanf("%s", &estado);
    
    printf("Agora chegou o momento de cadastrar informações sobre a cidade! \n");
    printf("Informe o nome da cidade: \n");
    scanf ("%s", &cidade);
    
    printf("Cadastre um código para sua carta: \n");
    scanf("%s", &codigo);

    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Qual a área territorial dessa cidade? \n");
    scanf(" %f", &area);

    printf("Qual o PIB dessa cidade? \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &pontosturisticos);

//Agora, a forma como esses dados serão apresentados:

    printf("País: %s - Estado: %s - Cidade: %s\n", pais, estado, cidade);
    printf("Código da carta %s\n", codigo);
    printf("A população dessa cidade é de %d\n",populacao);
    printf("A área territorial dessa cidade é de %f\n",area);
    printf("O PIB dessa cidade é %f\n",pib);
    printf("Essa cidade tem %d pontos turísticos.\n", pontosturisticos);

    return 0;
}
