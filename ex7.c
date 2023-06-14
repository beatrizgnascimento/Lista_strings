#include <stdio.h>

int main()
{
    char frase1[40], frase2[40];
    int i = 0, j = 0, caracteres;
    
    scanf("%[^\n]", frase1);
    getchar();
    scanf("%[^\n]", frase2);
    getchar();
     
   
    while(frase1[i] != '\0')
    {
       i++;
    }
    
    while(frase2[j] != '\0')
    {
       j++;
    }
    
    if(i > j)
    {
        caracteres = i - j;
        printf("A frase 1 possui %d caracteres a mais que a frase 2.", caracteres);
    }
    else
    {
        caracteres = j - i;
        printf("A frase 1 possui %d caracteres a menos que a frase 2.", caracteres);
    }
    
     
    return 0;
}
