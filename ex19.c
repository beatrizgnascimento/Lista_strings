#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char frase[90];
    int i = 0, maiuscula = 0, minuscula = 0;
    
    scanf("%[^\n]", frase);
    
    
    while(frase[i] != '\0')
    {
        if(islower(frase[i]))
        {
            minuscula++;
        }
        if(isupper(frase[i]))
        {
            maiuscula++;
        }
    i++;
    }
    
    printf("%d %d", minuscula, maiuscula);
    
    return 0;
}
