#include <stdio.h>
int main()
{
    char frase[80];
    int i = 0, cont = 0;
    
    scanf("%[^\n]", frase);
    
    
    while(frase[i] != '\0')
    {
       if(frase[i] == ' ')
       {
           cont++;
       }
        
        i++;
    }
    
    printf("%d", cont);
    return 0;
}
