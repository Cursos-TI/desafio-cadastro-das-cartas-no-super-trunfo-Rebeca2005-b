#include <stdio.h>

#define ESTADOS 8
#define CIDADES 4

// Estrutura para armazenar os dados das cidades
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[ESTADOS][CIDADES];
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    
    // Cadastro das cartas
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES; j++) {
            sprintf(cidades[i][j].codigo, "%c%02d", estados[i], j + 1);
            printf("Cadastro da cidade %s:\n", cidades[i][j].codigo);
            printf("Populacao: ");
            scanf("%d", &cidades[i][j].populacao);
            printf("Area (km^2): ");
            scanf("%f", &cidades[i][j].area);
            printf("PIB (bilhoes): ");
            scanf("%f", &cidades[i][j].pib);
            printf("Numero de pontos turisticos: ");
            scanf("%d", &cidades[i][j].pontos_turisticos);
            printf("\n");
        }
    }
    
    // Exibição das cartas cadastradas
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES; j++) {
            printf("Codigo: %s\n", cidades[i][j].codigo);
            printf("Populacao: %d\n", cidades[i][j].populacao);
            printf("Area: %.2f km^2\n", cidades[i][j].area);
            printf("PIB: %.2f bilhoes\n", cidades[i][j].pib);
            printf("Pontos Turisticos: %d\n", cidades[i][j].pontos_turisticos);
            printf("-----------------------\n");
        }
    }
    
    return 0;
}