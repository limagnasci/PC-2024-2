/*
Calcular o reajuste dos 50 produtos vendidos por uma empresa de modo que
os produtos com valores inferiores a R$ 100,00 tenham um reajuste de 10% e os
demais tenham um reajuste de 3% Para cada produto, o usuário deve informar o
código e valor atual de cada produto e o algoritmo deve mostrar o valor
reajustado, juntamente com o código do produto e o valor atual. Além disso, no
final mostrar o somatório dos valores atuais e o somatório dos valores reajustados
dos produtos. */

#include <stdio.h>

int main() {
    int codigo;
    float valorAtual, valorReajustado, somaAtual = 0, somaReajustado = 0;

    for (int i = 0; i < 50; i++) {
        scanf("%d %f", &codigo, &valorAtual);

        if (valorAtual < 100) {
            valorReajustado = valorAtual * 1.10;
        } else {
            valorReajustado = valorAtual * 1.03;
        }

        somaAtual += valorAtual;
        somaReajustado += valorReajustado;

        printf("Codigo: %d Valor Atual: %.2f Valor Reajustado: %.2f\n", codigo, valorAtual, valorReajustado);
    }

    printf("Soma dos valores atuais: %.2f\n", somaAtual);
    printf("Soma dos valores reajustados: %.2f\n", somaReajustado);

    return 0;
}
