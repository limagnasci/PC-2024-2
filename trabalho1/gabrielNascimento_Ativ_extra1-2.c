/* Escreva um algoritmo que leia um número indeterminado de notas. A última nota
que não entrará nos cálculos, contém o valor igual a 11. Calcular e escrever a
média das notas e a maior e a menor nota lida.
*/

#include <stdio.h>

int main() {
    float nota, soma = 0, maior = -1, menor = 11;
    int contador = 0;

    printf("Digite as notas (digite 11 para finalizar):\n");

    while (1) {
        scanf("%f", &nota);

        // Se a nota for 11, encerra a leitura
        if (nota == 11) {
            break;
        }

        // Verifica se a nota é válida
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            contador++;

            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        } else {
            printf("Nota inválida! Insira uma nota entre 0 e 10.\n");
        }
    }

    if (contador > 0) {
        printf("\nMédia das notas: %.2f\n", soma / contador);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
    } else {
        printf("\nNenhuma nota válida foi inserida.\n");
    }

    return 0;
}
