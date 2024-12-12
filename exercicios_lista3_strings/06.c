#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Nome: ");
    scanf("%s", &nome);

    int tamanho = strlen(nome);

    printf("Tamanho do nome: %d", tamanho);
}