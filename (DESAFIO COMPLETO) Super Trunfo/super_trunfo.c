#include <stdio.h>

struct Carta {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    // ===== Entrada de dados =====
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Codigo: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Codigo: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ===== Cálculos =====
    // Carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1.0 / carta1.densidadePopulacional);

    // Carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1.0 / carta2.densidadePopulacional);

    // ===== Comparações =====
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (carta1.populacao > carta2.populacao) ? 1 : 2,
           (carta1.populacao > carta2.populacao) ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n",
           (carta1.area > carta2.area) ? 1 : 2,
           (carta1.area > carta2.area) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.pib > carta2.pib) ? 1 : 2,
           (carta1.pib > carta2.pib) ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 2,
           (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 2,
           (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 2,
           (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (carta1.superPoder > carta2.superPoder) ? 1 : 2,
           (carta1.superPoder > carta2.superPoder) ? 1 : 0);


    return 0;

}
