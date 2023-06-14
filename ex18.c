#include <stdio.h>
#include <string.h>
int main()
{
    char frase1[90], frase2[90];
    
    scanf("%[^\n]", frase1);
    scanf(" %[^\n]", frase2);

    strcat(frase1, " ");
    strcat(frase1, frase2);
    
    printf("%s", frase1);
    
    return 0;
}
