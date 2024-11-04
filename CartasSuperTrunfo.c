#include <stdio.h>

int main() {
//Início do código utilizando informações do nível novato. 

 //Nome do jogo com dois espaços para melhor visualização.   
    printf("SuperTrunfo países \n \n");
    
 //Definição de variáveis a serem trabalhadas

    int populacao, pontosturisticos;
    char pais[50], estado[50], cidade[50], codigo[50];
    float area, pib;

//Início do cadastro das cartas com a interação do usuário no terminal

    printf("Vamos cadastrar o país! \n");    
    printf("Insira o nome do país: \n");
    scanf("%s", &pais);

    printf("Agora, vamos cadastrar o estado! \n");    
    printf("Insira o nome do estado: \n");
    scanf("%s", &estado);
    
    printf("Agora chegou o momento de cadastrar informações sobre a cidade! \n");
    printf("Informe o nome da cidade: \n");
    scanf ("%s", &cidade);
    
    printf("Cadastre um código para sua carta: (Lembre-se, os códigos devem ter 3 caracteres, uma letra de A a H (representando um estado), e números de 01 a 04 (representando os municípios)\n");
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

    printf("\nPaís: %s - Estado: %s - Cidade: %s\n", pais, estado, cidade);
    printf("Código da carta: %s\n", codigo);
    printf("A população dessa cidade é de %d\n",populacao);
    printf("A área territorial dessa cidade é de %.2f\n",area);
    printf("O PIB dessa cidade é %.2f\n",pib);
    printf("Essa cidade tem %d pontos turísticos.\n", pontosturisticos);

/*Utilização dos conhecimentos do nível Aventureiro. Novas Propriedades Calculadas:
Densidade Populacional: População dividida pela área da cidade.
PIB per Capita: PIB total dividido pela população.*/

    float densidadepopulacional;
    float pibpercapita;

    printf("\nVeja informações da cidade escolhida com base nas informaçãoes preenchidas: \n");
    
    densidadepopulacional = (float)populacao/area;
    printf("\nA densidade populacional é de: %.2f\n", densidadepopulacional);
    
    pibpercapita = pib/(float)populacao;
    printf("O PIB per capita é de: %.2f\n", pibpercapita);

    return 0;
}
