#include <stdio.h>
int main()
{
    char frase[90];
    int i = 0;
    double soma = 0;
    double num;
    
    scanf("%[^\n]", frase);
    
    while(frase[i] != '\0')
    {
        if(frase[i] != ' ')
        {
            sscanf(frase + i, "%lf", &num);
            soma = soma + num;
            
             while(frase[i] != ' ' && frase[i] != '\0')
            {
                i++;
            }
            
            if(frase[i] == '\0')
            {
                break;
            }
        }
         
        
       i++; 
    }
    

    printf("%lf", soma);
    
    
    return 0;
}
