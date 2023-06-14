#include <stdio.h>
int main()
{
    char frase[90];
    int i = 0, palavras = 1;
    
    scanf("%[^\n]", frase);
    
    while(frase[i] != '\0')
    {
        if(frase[i] == ' ')
        {
            palavras++;
        }
    i++;
    }
    
    printf("%d", palavras);
    return 0;
}
