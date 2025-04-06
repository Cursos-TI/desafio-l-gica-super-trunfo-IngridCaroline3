// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


#include <stdio.h>
#include <string.h>

int main() {
    
    char estado1[20], estado2[20];
    char codigo1, codigo2;
    char cidade1, cidade2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Nome do Estado: ");
    scanf("%s", &estado1); // Substituído para capturar nomes simples
    printf("População: ");
    if (scanf("%d", &populacao1) != 1 || populacao1 <= 0) {
        printf("\nErro: População inválida!\n");
        return 1;
    }
    printf("Área em km²: ");
    if (scanf("%f", &area1) != 1 || area1 <= 0) {
        printf("\nErro: Área inválida!\n");
        return 1;
    }
    printf("PIB (em bilhões): ");
    if (scanf("%f", &pib1) != 1 || pib1 <= 0) {
        printf("\nErro: PIB inválido!\n");
        return 1;
    }
    printf("Número de Pontos Turísticos: ");
    if (scanf("%d", &pontos_turisticos1) != 1 || pontos_turisticos1 < 0) {
        printf("\nErro: Número de pontos turísticos inválido!\n");
        return 1;
    }

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Nome do Estado: ");
    scanf("%s", &estado2); // Substituído para capturar nomes simples
    printf("População: ");
    if (scanf("%d", &populacao2) != 1 || populacao2 <= 0) {
        printf("\nErro: População inválida!\n");
        return 1;
    }
    printf("Área em km²: ");
    if (scanf("%f", &area2) != 1 || area2 <= 0) {
        printf("\nErro: Área inválida!\n");
        return 1;
    }
    printf("PIB (em bilhões): ");
    if (scanf("%f", &pib2) != 1 || pib2 <= 0) {
        printf("\nErro: PIB inválido!\n");
        return 1;
    }
    printf("Número de Pontos Turísticos: ");
    if (scanf("%d", &pontos_turisticos2) != 1 || pontos_turisticos2 < 0) {
        printf("\nErro: Número de pontos turísticos inválido!\n");
        return 1;
    }

    // Cálculo da Densidade Demográfica
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Menu interativo
    int escolha;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    if (scanf("%d", &escolha) != 1 || escolha < 1 || escolha > 5) {
        printf("\nErro: Escolha inválida!\n");
        return 1;
    }

    // Comparação com base no atributo escolhido
    float valor1 = 0, valor2 = 0;
    int vencedor = 0;

    switch (escolha) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            printf("\nComparação de População:\n");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            printf("\nComparação de Área:\n");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            printf("\nComparação de PIB:\n");
            break;
        case 4:
            valor1 = pontos_turisticos1;
            valor2 = pontos_turisticos2;
            printf("\nComparação de Pontos Turísticos:\n");
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            printf("\nComparação de Densidade Demográfica:\n");
            break;
        default:
            printf("\nValores inválidos.\n");
            return 1;
    }

    if (valor1 > valor2) {
        vencedor = 1;
    } else if (valor2 > valor1) {
        vencedor = 2;
    } else {
        vencedor = 0;
    }

    // Exibição do resultado
    printf("\n=== Resultado da Comparação ===\n");
    printf("País 1 - %s: %.2f\n", estado2, valor1);
    printf("País 2 - %s: %.2f\n", estado2, valor2);

    if (vencedor == 1) {
        printf("\nResultado: País 1 (%s) venceu!\n", estado1);
    } else if (vencedor == 2) {
        printf("\nResultado: País 2 (%s) venceu!\n", estado2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}