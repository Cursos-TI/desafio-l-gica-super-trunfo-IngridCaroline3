// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


#include <stdio.h>
#include <string.h>

int main() {
    
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
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
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
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

    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Escolha do atributo diretamente no código
    char atributo[30] = "Densidade Populacional"; // Altere aqui para comparar outro atributo

    // Comparação
    int carta_vencedora = 0; // 1 para Carta 1, 2 para Carta 2
    float valor1 = 0, valor2 = 0;

    // Lógica de comparação com base no atributo escolhido
    if (strcmp(atributo, "Populacao") == 0) {
        valor1 = populacao1;
        valor2 = populacao2;
        if (valor1 > valor2) {
            carta_vencedora = 1;
        } else if (valor2 > valor1) {
            carta_vencedora = 2;
        }
    } else if (strcmp(atributo, "Area") == 0) {
        valor1 = area1;
        valor2 = area2;
        if (valor1 > valor2) {
            carta_vencedora = 1;
        } else if (valor2 > valor1) {
            carta_vencedora = 2;
        }
    } else if (strcmp(atributo, "PIB") == 0) {
        valor1 = pib1;
        valor2 = pib2;
        if (valor1 > valor2) {
            carta_vencedora = 1;
        } else if (valor2 > valor1) {
            carta_vencedora = 2;
        }
    } else if (strcmp(atributo, "Densidade Populacional") == 0) {
        valor1 = densidade1;
        valor2 = densidade2;
        if (valor1 < valor2) { // Regra invertida
            carta_vencedora = 1;
        } else if (valor2 < valor1) {
            carta_vencedora = 2;
        }
    } else if (strcmp(atributo, "PIB per capita") == 0) {
        valor1 = pib_per_capita1;
        valor2 = pib_per_capita2;
        if (valor1 > valor2) {
            carta_vencedora = 1;
        } else if (valor2 > valor1) {
            carta_vencedora = 2;
        }
    } else {
        printf("\nErro: Atributo não reconhecido!\n");
        return 1; // Encerra o programa com erro
    }

    // Exibição do resultado
    printf("\nComparação de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, valor2);

    if (carta_vencedora == 1) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (carta_vencedora == 2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}