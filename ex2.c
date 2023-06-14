#include <stdio.h>

int main()
{
    char frase[99];
    int i = 0, contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
    
    scanf("%[^\n]", frase);
    
    while(frase[i] != '\0')
    {
        if(frase[i] == 'a' || frase[i] == 'A')
        {
            contA++;
        }
         if(frase[i] == 'e' || frase[i] == 'E')
        {
            contE++;
        }
         if(frase[i] == 'i' || frase[i] == 'I')
        {
            contI++;
        }
         if(frase[i] == 'o' || frase[i] == 'O')
        {
            contO++;
        }
         if(frase[i] == 'u' || frase[i] == 'U')
        {
            contU++;
        }
    i++;
    }
    
    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", contA, contE, contI, contO, contU);
    
    return 0;
}
