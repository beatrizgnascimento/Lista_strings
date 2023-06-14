#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char frase[90];
    int i = 0;
    
    scanf("%[^\n]", frase);
    
    frase[0] = toupper(frase[0]);
    
    while(frase[i] != '\0')
    {
        if(frase[i] == ' ')
        {
            frase[i+1] = toupper(frase[i+1]); 
        }
    i++;
    }
    
    printf("%s", frase);
    return 0;
}
