#include <stdio.h>
#include <string.h>

int main()
{
    char frase1[80], frase2[80];
    int i = 0, j = 0;
    
    scanf("%[^\n]", frase1);
    
    strcpy(frase2, frase1);
    
    scanf("%[^\n]", frase2);
    
    while(frase1[i] != '\0')
    {
        if(frase1[i] != ' ')
        {
            frase2[j] = frase1[i];
            j++;
        }
        i++;
    }
    
    frase2[j] = '\0';
    
    printf("%s", frase2);
    
    return 0;
}
