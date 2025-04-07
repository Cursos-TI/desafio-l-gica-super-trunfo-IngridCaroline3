// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


#include <stdio.h>

// Estrutura de Carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    // Cartas pré-definidas
    Carta c1 = {"Brasil", 211000000, 8516000, 1870.3, 30};
    Carta c2 = {"EUA", 331000000, 9834000, 21433.2, 45};

    // Variáveis para armazenar a escolha de atributos e valores
    int atributo1 = 0, atributo2 = 0;
    float valor1A = 0, valor2A = 0, valor1B = 0, valor2B = 0;

    // Densidade demográfica (exceção na regra de comparação)
    float densidade1 = c1.populacao / c1.area;
    float densidade2 = c2.populacao / c2.area;

    // Exibição inicial
    printf("Comparação entre: %s e %s\n", c1.nome, c2.nome);

    // Menu para escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &atributo1);

    // Validar escolha do primeiro atributo
    if (atributo1 < 1 || atributo1 > 5) {
        printf("\nErro: Escolha inválida!\n");
        return 1;
    }

    // Menu dinâmico para escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            printf("%d - ", i);
            switch (i) {
                case 1: printf("População\n"); break;
                case 2: printf("Área\n"); break;
                case 3: printf("PIB\n"); break;
                case 4: printf("Pontos Turísticos\n"); break;
                case 5: printf("Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Digite sua escolha: ");
    scanf("%d", &atributo2);

    // Validar escolha do segundo atributo
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("\nErro: Escolha inválida!\n");
        return 1;
    }

    // Comparação dos dois atributos
    switch (atributo1) {
        case 1: valor1A = c1.populacao; valor2A = c2.populacao; break;
        case 2: valor1A = c1.area; valor2A = c2.area; break;
        case 3: valor1A = c1.pib; valor2A = c2.pib; break;
        case 4: valor1A = c1.pontos_turisticos; valor2A = c2.pontos_turisticos; break;
        case 5: valor1A = densidade1; valor2A = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor1B = c1.populacao; valor2B = c2.populacao; break;
        case 2: valor1B = c1.area; valor2B = c2.area; break;
        case 3: valor1B = c1.pib; valor2B = c2.pib; break;
        case 4: valor1B = c1.pontos_turisticos; valor2B = c2.pontos_turisticos; break;
        case 5: valor1B = densidade1; valor2B = densidade2; break;
    }

    // Soma dos valores
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    // Exibição dos resultados
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);
    printf("%s:\nAtributo 1: %.2f\nAtributo 2: %.2f\nSoma: %.2f\n", c1.nome, valor1A, valor1B, soma1);
    printf("%s:\nAtributo 1: %.2f\nAtributo 2: %.2f\nSoma: %.2f\n", c2.nome, valor2A, valor2B, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s!\n", c1.nome);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s!\n", c2.nome);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}