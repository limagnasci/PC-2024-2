#include <stdio.h>

int main() {
    char nome[50];
    int i;

    printf("Digite um nome: ");
    scanf("%s", &nome);

    printf("4 primeiras letras do nome: %.4s", nome);
}