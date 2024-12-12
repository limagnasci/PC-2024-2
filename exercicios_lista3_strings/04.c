#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    scanf("%s", &nome);

    if (nome[0] == 'a') {
        printf("%s", nome);
    } else {
        printf("Não começa com A");
    }
}