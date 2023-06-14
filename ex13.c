#include <stdio.h>
#include <stdlib.h>
int main()
{
    char num1[10], num2[10], num3[10], num4[10], soma_string[10];
    int n1, n2, n3, n4, soma;
    
    scanf("%s", num1);
    scanf("%s", num2);
    scanf("%s", num3);
    scanf("%s", num4);
    
    
    sscanf(num1, "%d", &n1);
    sscanf(num2, "%d", &n2);
    sscanf(num3, "%d", &n3);
    sscanf(num4, "%d", &n4);
    
    soma = n1 + n2 + n3 + n4;
    
    sprintf(soma_string, "%d", soma);
    
    printf("%s \n", soma_string);
    
    
    
    
    return 0;
}
