#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char frase[100];
    int i, j, tam;
    int palindromo = 1;  // Assume que é um palíndromo
    
    scanf(" %[^\n]", frase);

    tam = strlen(frase);

    for (i = 0, j = tam - 1; i < j; i++, j--) {
        // Ignora os espaços
        while (frase[i] == ' ')
            i++;
        while (frase[j] == ' ')
            j--;

        // Compara os caracteres, ignorando diferenças de maiúsculas e minúsculas
        if (tolower(frase[i]) != tolower(frase[j])) {
            palindromo = 0;  // Não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
