#include <stdio.h>

int main() {
    // Variáveis para carta 1
    char estado1;
    char codigo1[4];// Ex: A01 (3 caracteres + '\0' para o final da string)
    char nomeCidade1[100]; // Tamanho máximo para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2 [100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da carta 1
    printf ("Digite os dados da Carta1:\n");
    printf("Estado(A-H): ");
    scanf("%c", &estado1); // O espaço antes de %c consome espaços em branco
    printf("Codigo (Ex: A01):");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);// Lê a linha inteira, incluindo espaços
    printf("População:");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB(bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontosTuristicos1);

    //Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado(A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo(Ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área(km²): ");
    printf("%f", &area2);
    printf("PIB(bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Números de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Exibição dos dados da Carta 1
    printf("\nCarta1:\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da Cidade: %s\n");
    printf("População:%d\n", populacao1);
    printf("Área: %.2f km²\n", area1); //%.2f formata o float para 2 casas decimais
    printf("PIB: %2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta2:\n");
    printf("Estado:%c\n",estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}