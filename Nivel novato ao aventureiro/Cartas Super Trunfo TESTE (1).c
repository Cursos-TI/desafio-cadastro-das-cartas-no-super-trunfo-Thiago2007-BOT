#include <stdio.h>

int main() {

// Carta 1
    int populaçao1;
    int pontos1;
    float pib1;
    float area1;
// Carta 2
    int populaçao2;
    int pontos2;
    float pib2;
    float area2;

// Entrada carta 1

    printf("Digite o numero da populaçao da primeira carta: ");
    scanf("%d", &populaçao1);

    printf("Digite a area da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos a primeira carta tem: ");
    scanf("%d", &pontos1);

 // Entrada carta 2

    printf("Digite o numero da populaçao da segunda carta: ");
    scanf("%d", &populaçao2);

    printf("Digite a area da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos a segunda carta tem: ");
    scanf("%d", &pontos2);
    
// Dados Carta 1

    printf("\n=== Carta 1 ===\n");
    printf("Populacao: %d\n", populaçao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

// Dados Carta 2

    printf("\n=== carta 2 ===\n");
    printf("Populaçao: %d\n", populaçao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    
    return 0;
}
