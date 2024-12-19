#include <stdio.h>

int main() {
    // Declaração da matriz e variáveis para as somas
    int V[3][3];
    int somaLinha3 = 0, somaColuna2 = 0;
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int somaTotal = 0;

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("V[%d][%d]: ", i, j);
            scanf("%d", &V[i][j]);

            // Soma total da matriz
            somaTotal += V[i][j];

            // Soma da linha 3
            if (i == 2) {
                somaLinha3 += V[i][j];
            }

            // Soma da coluna 2
            if (j == 1) {
                somaColuna2 += V[i][j];
            }

            // Soma da diagonal principal
            if (i == j) {
                somaDiagonalPrincipal += V[i][j];
            }

            // Soma da diagonal secundária
            if (i + j == 2) {
                somaDiagonalSecundaria += V[i][j];
            }
        }
    }

    // Exibição das somas calculadas
    printf("\nResultados das somas:\n");
    printf("a. Soma da linha 3: %d\n", somaLinha3);
    printf("b. Soma da coluna 2: %d\n", somaColuna2);
    printf("c. Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("d. Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);
    printf("e. Soma de todos os elementos da matriz: %d\n", somaTotal);

}
