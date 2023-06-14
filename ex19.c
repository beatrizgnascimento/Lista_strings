#include <stdio.h>
#include <string.h>

int main() {
    char str[90];
    int i = 0, tam, num_a = 0, maior;
    
    scanf("%[^\n]", str);
    
    while (str[i] != '\0') {
        if (str[i] == 'a') {
           num_a++;
        }
        i++;
    }
    
    tam = strlen(str);
    
   
     if (num_a > (tam / 2)) 
        {
             maior = tam;
            
         } 
     else 
         {
            maior = num_a * 2 - 1;
        }
    
    
   
    printf("%d", maior);
   
    return 0;
}

