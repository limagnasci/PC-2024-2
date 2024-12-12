#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: \n");
    scanf("%s", &palavra);

    int tamanho = strlen(palavra);

    printf("Tamanho da palavra: %d\n", tamanho);

}