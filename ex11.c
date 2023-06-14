#include <stdio.h>
#include <stdlib.h>
int main()
{
    char n1[30], n2[30], n3[30], n4[30];
    int soma;
    
    scanf("%[^\n]", n1);
    scanf(" %[^\n]", n2);
    scanf(" %[^\n]", n3);
    scanf(" %[^\n]", n4);
    
    
    
    int num1 = atoi(n1);
    int num2 = atoi(n2);
    int num3 = atoi(n3);
    int num4 = atoi(n4);
    
    soma = num1 + num2 + num3 + num4;
    
    printf("%d", soma);
    
    
    
    
    return 0;
}
