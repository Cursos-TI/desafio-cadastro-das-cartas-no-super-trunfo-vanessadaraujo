#include <stdio.h>

int main() {

 //Nome do jogo com dois espaços para melhor visualização.   
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
