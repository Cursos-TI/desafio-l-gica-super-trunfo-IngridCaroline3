#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
        char estado1 ,estado2;
        char codigo1, codigo2;
        char cidade1[20] ,cidade2[20];//nome da cidade com até 20 caracteres
        int pop1 ,pop2;
        float area1 ,area2;
        float pib1 ,pib2;
        int turistico1 ,turistico2;
        float densidade1, densidade2;
        float pib_per_capita1, pib_per_capita2;
    
    
        printf("CARTA 1: \n");
        
        //leitura de dados para o estado escolhido
        printf(" \n Digite a inicial do estado: \n");
        scanf(" %c" ,&estado1); 
    
        getchar();// Limpa o buffer do teclado para evitar caracteres residuais após leitura
        
        printf("Código Cidade: \n");
        scanf("%s" ,codigo1);
    
        getchar();
    
        printf("Digite o nome da cidade: \n");
        scanf(" %s" ,cidade1); 
    
        getchar();
       
        printf("Qual a sua população \n");
        scanf("%d" ,&pop1);
    
        
        printf("Qual a quantidade de area em km²: \n");
        scanf("%f" ,&area1);
    
        
        printf("Digite o Pib da cidade: \n");
        scanf("%f" ,&pib1);
    
        getchar();// Limpa o buffer
    
        printf("Digite o número de pontos turisticos: \n");
        scanf("%d" ,&turistico1);
    
        //carta 2    
        
        printf("CARTA 2: \n");
        
        printf(" \n Digite a inicial do estado: \n");
        scanf(" %c" ,&estado2); 
    
        getchar();// Limpa o buffer do teclado para evitar caracteres residuais após leitura
        
        printf("Código Cidade: \n");
        scanf("%s" ,codigo2);
    
        getchar();
    
        printf("Digite o nome da cidade: \n");
        scanf("%s" ,cidade2); 
    
        getchar();
       
        printf("Qual a sua população \n");
        scanf(" %d" ,&pop2);
    
        getchar();
        
        printf("Qual a quantidade de area em km²: \n");
        scanf("%f" ,&area2);
    
        getchar();// Limpa o buffer
      
        
        printf("Digite o Pib da cidade: \n");
        scanf("%f" ,&pib2);
    
        getchar();
    
        printf("Digite o número de pontos turisticos: \n");
        scanf("%d" ,&turistico2);
    
        //modo para exibição 
    
        printf("\n CARTA 1 \n");
        printf("\n Estado: %c\n" ,estado1);
        printf("Codigo:%c" ,estado1);
        printf("%s\n" ,codigo1);
        printf("Nome da cidade: %s\n" ,cidade1);
        printf("População: %d\n" ,pop1);
        printf("Área: %f km²\n" ,area1);
        printf("PIB: %f bilhões de reais\n" ,pib1);
        printf("Número de pontos turisticos: %d\n" ,turistico1);
    
        //modo para exibição carta 2
    
        printf("\n CARTA 2 \n");
        printf("\n Estado: %c\n" ,estado2);
        printf("Codigo:%c" ,estado2);
        printf("%s\n" ,codigo2);
        printf("Nome da cidade: %s\n" ,cidade2);
        printf("População: %d\n" ,pop2);
        printf("Área: %f km²\n" ,area2);
        printf("PIB: %f bilhões de reais\n" ,pib2);
        printf("Número de pontos turisticos: %d\n" ,turistico2);
    
    
        // Escolha do atributo para comparação
        const char* atributo = "densidade_populacional"; // Alteraração de "populacao", "area", "pib", para"densidade_populacional", ou "pib_per_capita"
    
        printf("\nCOMPARANDO ATRIBUTO: %s\n", atributo);
    
        // Comparação dos atributos
        if (strcmp(atributo, "populacao") == 0) {
            printf("População da Carta 1 (%s): %d\n", cidade1, pop1);
            printf("População da Carta 2 (%s): %d\n", cidade2, pop2);
            if (pop1 > pop2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
        } else {
            if (strcmp(atributo, "area") == 0) {
                printf("Área da Carta 1 (%s): %.2f km²\n", cidade1, area1);
                printf("Área da Carta 2 (%s): %.2f km²\n", cidade2, area2);
                if (area1 > area2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                }
            } else {
                if (strcmp(atributo, "pib") == 0) {
                    printf("PIB da Carta 1 (%s): %.2f bilhões\n", cidade1, pib1);
                    printf("PIB da Carta 2 (%s): %.2f bilhões\n", cidade2, pib2);
                    if (pib1 > pib2) {
                        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    } else {
                        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    }
                } else {
                    if (strcmp(atributo, "densidade_populacional") == 0) {
                        printf("Densidade Populacional da Carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
                        printf("Densidade Populacional da Carta 2 (%s): %.2f hab/km²\n", cidade2, densidade2);
                        if (densidade1 < densidade2) {
                            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                        } else {
                            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                        }
                    } else {
                        if (strcmp(atributo, "pib_per_capita") == 0) {
                            printf("PIB per capita da Carta 1 (%s): %.6f bilhões\n", cidade1, pib_per_capita1);
                            printf("PIB per capita da Carta 2 (%s): %.6f bilhões\n", cidade2, pib_per_capita2);
                            if (pib_per_capita1 > pib_per_capita2) {
                                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                            } else {
                                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                            }
                        }
                    }
                }
            }
        }
    
 return 0;