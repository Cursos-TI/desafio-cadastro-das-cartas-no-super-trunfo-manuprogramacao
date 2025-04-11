#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {

 // Carta 1
 char estado1[3]; 
 char codigo_carta1[3]; 
 char nome_cidade1[100];
 int populacao1;
 float area1;
 float PIB1;
 int pontos_turisticos1;

 // Carta 2
 char estado2[3]; 
 char codigo_carta2[3]; 
 char nome_cidade2[100]; 
 int populacao2;
 float area2;
 float PIB2;
 int pontos_turisticos2;

 // Inserir dados da carta 1
    printf("Carta 1\n");

    printf("Digite o estado (ex: GO): ");
    scanf("%2s", estado1); 

    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

 // inserir dados da carta 2
    printf("\n Carta 2\n");

    printf("Digite o estado 2 (ex: GO): ");
    scanf("%2s", estado2); 

    printf("Digite o código da carta 2: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade 2: ");
    scanf(" %s", nome_cidade2); 

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

 // Dados da carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1); 
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

 // Dados da carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2); 
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    

    return 0;
}
