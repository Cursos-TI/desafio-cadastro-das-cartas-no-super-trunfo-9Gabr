#include <stdio.h>

int main()
{
    // Variaveis para a primeira carta

    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variaveis para a segunda carta

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // variáveis para comparação dos atributos das cartas
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

    // Cadastro das Cartas:
    // carta 1

    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1); // Espaço antes de %c para ignorar espaços em branco
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade1); // Espaço antes de %s para ignorar espaços em branco
    printf("Digite o Código da Cidade: ");
    scanf(" %s", codigo1); // Espaço antes de %s para ignorar espaços em branco
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidadePopulacional1 = (float)populacao1 / area1;                                                                       // Cálculo da densidade populacional
    pibPerCapita1 = (pib1 * 1e9) / populacao1;                                                                                // Cálculo do PIB per capita
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1); // Cálculo do super poder

    // carta 2

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2); // Espaço antes de %c para ignorar espaços em branco
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade2); // Espaço antes de %s para ignorar espaços em branco
    printf("Digite o Código da Cidade: ");
    scanf(" %s", codigo2); // Espaço antes de %s para ignorar espaços em branco
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidadePopulacional2 = (float)populacao2 / area2;                                                                       // Cálculo da densidade populacional
    pibPerCapita2 = (pib2 * 1e9) / populacao2;                                                                                // Cálculo do PIB per capita
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2); // Cálculo do super poder

    // Exibição dos Dados das Cartas:
    // carta 1

    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.0f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f por habitante\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // carta 2

    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.0f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f por habitante\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos Atributos das Cartas
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidadePopulacional = densidadePopulacional1 > densidadePopulacional2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    printf("\nResultados da Comparação:\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidadePopulacional);
    printf("PIB per Capita: %d\n", resultadoPibPerCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);

    return 0;
}
