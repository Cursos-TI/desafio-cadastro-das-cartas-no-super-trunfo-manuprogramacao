#include <stdio.h>

int main() {
// Cadastro de cartas
   // Carta 1
 char estado1[3]; 
 char codigo_carta1[4]; 
 char nome_cidade1[100];
 float populacao1;
 float area1;
 float PIB1;
 int pontos_turisticos1;
 float densidade_populacional1;
 float pib_percapita1;
 float super_poder1;

   // Carta 2
 char estado2[3]; 
 char codigo_carta2[4]; 
 char nome_cidade2[100]; 
 float populacao2;
 float area2;
 float PIB2;
 int pontos_turisticos2;
 float densidade_populacional2;
 float pib_percapita2;
 float super_poder2;
 // Inserir dados da carta 1
    printf("Carta 1\n");

    printf("Digite o estado (ex: GO): ");
    scanf("%2s", estado1); 

    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

 // inserir dados da carta 2
    printf("\n Carta 2\n");

    printf("Digite o estado (ex: GO): ");
    scanf("%2s", estado2); 

    printf("Digite o código da carta: ");
    scanf("%3s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2); 

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

// Calculo da densidade populacional e PIB per capita
 densidade_populacional1 = populacao1 / area1;
 densidade_populacional2 = populacao2 / area2;
 pib_percapita1 = (PIB1*1e9) / populacao1;
 pib_percapita2 = (PIB2*1e9) / populacao2;

 super_poder1 = (populacao1 + area1 + PIB1 + pontos_turisticos1 + pib_percapita1 + (1/densidade_populacional1));
 super_poder2 = (populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_percapita2 + (1/densidade_populacional2));

 // Dados da carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per capita: %.2f reais \n", pib_percapita1);
    printf("O Super poder é: %f \n", super_poder1);

 // Dados da carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %.1f\n", populacao2);
    printf("Área: %.2f\n", area2); 
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per capita: %.2f reais \n", pib_percapita2);
    printf("O Super poder é: %.2f \n", super_poder2);

    printf( " \n");

    // Comparação das cartas
    
    printf("Comparação de cartas\n");

    printf(" \n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) * 1 + (populacao2 >= populacao1) * 2, 
    populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n", (area1 > area2)*1 + (area2 >= area1) * 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d) \n", (PIB1 > PIB2) * 1 + (PIB2 >= PIB1), PIB1 > PIB2);

    printf("Pontos turisticos: Carta %d venceu (%d) \n", (pontos_turisticos1 > pontos_turisticos2) * 1 + 
    (pontos_turisticos2 >= pontos_turisticos1) * 2, pontos_turisticos1 > pontos_turisticos2);

    printf("Densidade populacional: Carta %d venceu (%d) \n", (densidade_populacional1 < densidade_populacional2) * 1 + 
    (densidade_populacional2 <= densidade_populacional1) * 2, densidade_populacional1 < densidade_populacional2);

    printf("PIB per capita: Carta %d venceu (%d) \n", (pib_percapita1 > pib_percapita2) * 1 + 
    (pib_percapita2 >= pib_percapita1), pib_percapita1 > pib_percapita2); 

    printf("Super poder: Carta %d venceu (%d) \n", (super_poder1 > super_poder2) * 1 + 
    (super_poder2 > super_poder1) * 2, super_poder1 > super_poder2);


    return 0;
}
