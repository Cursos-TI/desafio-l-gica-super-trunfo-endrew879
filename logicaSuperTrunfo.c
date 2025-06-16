#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
struct Carta {
    char estado[3];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);

    printf("Codigo da carta (ex: SP01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", carta1.nome);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao; // Convertendo PIB de bilhões para unidades

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);

    printf("Codigo da carta (ex: RJ01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", carta2.nome);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo da densidade populacional e PIB per capita
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    printf("\n=== Comparacao de Cartas ===\n");

    // 🔥 Atributo escolhido para comparação: População
    printf("Atributo escolhido: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", carta2.nome, carta2.estado, carta2.populacao);

    // Comparação
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}