#include <stdio.h>

int main() {
    float lado1, lado2, area;

    printf("Digite o primeiro lado do retângulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do retângulo: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("A área do retângulo é: %.2f\n", area);

}
