#include <stdio.h>

int main() {
    // Declaração de variáveis
    float notas[10], soma = 0, media;
    int i, contador = 0;

    // Leitura das notas dos 10 alunos
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 10;

    // Contagem de alunos com notas maiores que a média
    for (i = 0; i < 10; i++) {
        if (notas[i] > media) {
            contador++;
        }
    }

    // Exibição dos resultados
    printf("A média das notas é: %.2f\n", media);
    printf("A quantidade de alunos com notas maiores que a média é: %d\n", contador);

}
