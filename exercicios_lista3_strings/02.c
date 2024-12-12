#include <stdio.h>

int main() {
    char palavra[100];
    int i, tamanho_string = 0;

    printf("Digite uma palavra: \n");
    scanf("%s", &palavra);

    while (palavra[tamanho_string] != '\0')
    {
        tamanho_string++;
    }

    printf("Tamanho da string: %d\n", tamanho_string);
    
}