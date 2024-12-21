/* Escreva um algoritmo que leia a capacidade de um elevador e o peso de 5 pessoas.
Informar se o elevador está liberado para subir ou excedeu a carga máxima. */

#include <stdio.h>

int main() {
    float capacidadeElevador, peso[5], soma = 0;
    int i;

    printf("Capacidade do elevador em kg: ");
    scanf("%f", &capacidadeElevador);

    for (i = 0; i < 5; i++) {
        printf("Peso da pessoa %d: ", i + 1);
        scanf("%f", &peso[i]);
        soma += peso[i];
    }

    if (soma <= capacidadeElevador) {
        printf("Elevador liberado para subir!");
    } else {
        printf("Capacidade máxima excedida!");
    }
}