#include <stdio.h>

int main() {
//Início do código utilizando informações do nível novato. 

 //Nome do jogo com dois espaços para melhor visualização.   
    printf("SuperTrunfo países \n \n");
    
 //Definição de variáveis a serem trabalhadas 

    int populacao, pontosturisticos;
    char pais[50], estado[50], cidade1[50], cidade2[50], codigo1[50], codigo2[50];
    float area, pib, densidadepopulacional1, pibpercapita1, densidadepopulacional2, pibpercapita2;

//Início do cadastro das cartas com a interação do usuário no terminal

    printf("Vamos cadastrar o país! \n");    
    printf("Insira o nome do país: \n");
    scanf("%s", &pais);

    printf("Agora, vamos cadastrar o estado! \n");    
    printf("Insira o nome do estado: \n");
    scanf("%s", &estado);
    
    printf("\nAgora chegou o momento de cadastrar informações sobre as cidades! \n");

    printf("Cadastre um código para sua primeira carta: (Lembre-se, os códigos devem ter 3 caracteres, uma letra de A a H (representando um estado), e números de 01 a 04 (representando os municípios)\n");
    scanf("%s", &codigo1);

    printf("Informe o nome da primeira cidade: \n");
    scanf ("%s", &cidade1);
    
    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Qual a área territorial dessa cidade? \n");
    scanf(" %f", &area);

    printf("Qual o PIB dessa cidade? \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &pontosturisticos);

//Utilização dos conhecimentos do nível Aventureiro com os cálculos.

    densidadepopulacional1 = (float)populacao/area;
    pibpercapita1 = pib/(float)populacao;

//Cadastro da segunda carta com interação de usuário

    printf("\nCadastre um código para sua segunda carta: (Lembre-se, os códigos devem ter 3 caracteres, uma letra de A a H (representando um estado), e números de 01 a 04 (representando os municípios)\n");
    scanf("%s", &codigo2);

    printf("Informe o nome da segunda cidade: \n");
    scanf ("%s", &cidade2);
    
    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Qual a área territorial dessa cidade? \n");
    scanf(" %f", &area);

    printf("Qual o PIB dessa cidade? \n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &pontosturisticos);

//Utilização dos conhecimentos do nível Aventureiro com os cálculos.

    densidadepopulacional2 = (float)populacao/area;
    pibpercapita2 = pib/(float)populacao;

//Agora, a apresentação dos dados coletados:

    printf("\nVeja informações da cidade escolhida com base nas informaçãoes preenchidas: \n");
    printf("\nPaís: %s - Estado: %s", pais, estado);
    printf("Cidade 1: %s\n", cidade1);
    printf("Código da carta 1: %s\n", codigo1);
    printf("A população dessa cidade é de %d\n",populacao);
    printf("A área territorial dessa cidade é de %.2f\n",area);
    printf("O PIB dessa cidade é %.2f\n",pib);
    printf("Essa cidade tem %d pontos turísticos.\n", pontosturisticos);
    printf("A densidade populacional é de: %.2f\n", densidadepopulacional1);
    printf("O PIB per capita é de: %.2f\n", pibpercapita1);

   
    printf("\nCidade 2: %s\n", cidade2);
    printf("Código da carta 2: %s\n", codigo2);
    printf("A população dessa cidade é de %d\n",populacao);
    printf("A área territorial dessa cidade é de %.2f\n",area);
    printf("O PIB dessa cidade é %.2f\n",pib);
    printf("Essa cidade tem %d pontos turísticos.\n", pontosturisticos);
    printf("A densidade populacional é de: %.2f\n", densidadepopulacional2);
    printf("O PIB per capita é de: %.2f\n", pibpercapita2);

//Aplicação dos conhecimentos da fase mestre utilizando comparação

    printf("\nVamos aos resultados?\n");
    printf(" A cidade com menor Densidade populacional é a cidade 1? %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf(" A cidade com maior PIB per capita é a cidade 1? %d\n", pibpercapita1 > pibpercapita2);
   

    return 0;
}
