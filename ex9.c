#include <stdio.h>
#include <string.h>
int main()
{
    char F[90], c;
    int I, i, posicao = -1;
    
    scanf("%[^\n]", F);
    scanf(" %c", &c); //ignorar possiveis quebras de linha deixadas pelo scanf anterior
    scanf("%d", &I);
    
    int tam = strlen(F);
    
    for(i = I; i < tam; i++)
    {
        if(F[i] == c)
        {
            posicao = i;
            break;
        }
    }
    
    printf("%d", posicao);
    return 0;
}
