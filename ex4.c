#include <stdio.h>
int main()
{
    char frase[99];
    int i = 0, tamanho = 0;
    
    scanf("%[^\n]", frase);
    
    while(frase[tamanho] != '\0')
    {
       tamanho++;
    }
    
    for(i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", frase[i]);
    }
    
   
    return 0;
}
