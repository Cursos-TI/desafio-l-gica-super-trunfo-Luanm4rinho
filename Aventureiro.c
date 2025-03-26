#include <stdio.h>

// Programa Super Trunfo de cidades com menu interativo para comparar atributos.

int main() {
    // Declaração das variáveis
    char estado1[3], estado2[3]; 
    char codigo1[4], codigo2[4];
    char nomeCidade1[30], nomeCidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    int opcao; // Para armazenar a escolha do usuário no menu

    // Inserção dos dados da Carta 1
    printf("\nInsira os dados da Carta 1\n");
    printf("Estado (2 caracteres, ex: SP): ");
    scanf("%2s", estado1);
    printf("Código (3 caracteres): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Inserção dos dados da Carta 2
    printf("\nInsira os dados da Carta 2\n");
    printf("Estado (2 caracteres, ex: RJ): ");
    scanf("%2s", estado2);
    printf("Código (3 caracteres): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição do menu para escolha do atributo de comparação
    printf("\n=== Escolha um atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // Lógica de comparação usando switch e if-else
    printf("\n=== Comparação de Cartas ===\n");

    switch (opcao) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
            printf("%s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("%s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s (%s): %d pontos\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("%s (%s): %d pontos\n", nomeCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5: // Densidade Populacional (regra inversa: menor valor vence)
            printf("Comparando Densidade Populacional:\n");
            printf("%s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("%s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}