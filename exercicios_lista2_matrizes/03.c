#include <stdio.h>

int main() {
    // Declaração da matriz e variáveis
    int matriz[5][6];
    int soma = 0, totalElementos = 5 * 6;
    float media;

    // Leitura dos valores da matriz
    printf("Digite os valores para a matriz 5x6:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];  // Acumula a soma dos elementos
        }
    }

    // Cálculo da média
    media = (float)soma / totalElementos;

    // Exibição dos resultados
    printf("\nMédia dos valores na matriz: %.2f\n", media);

    // Exibição do conteúdo da matriz
    printf("\nConteúdo da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
