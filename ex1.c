#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[99];
    int i = 0, cont = 0;
    
    scanf("%[^\n]", frase);
    
    while(frase[i] != '\0')
    {
        char vog = tolower(frase[i]);
        
        if(vog == 'a' || vog == 'e' || vog == 'i' || vog == 'o' || vog == 'u')
        {
           
            cont++;
        }
    i++;
    }
    
    printf("%d\n", cont);
    
    return 0;
}
