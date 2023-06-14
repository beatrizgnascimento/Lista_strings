#include <stdio.h>
#include <string.h>
int main()
{
    char A[99], B[99];
    int i, j, cont = 0, encontrou;
    scanf("%[^\n]", A);
    scanf(" %[^\n]", B);
    
   for (i = 0; i <= strlen(B) - strlen(A); i++)
    {
        encontrou = 1;
       for(j = 0; j < strlen(A); j++)
       {
           if(A[j] != B[j + i])
           {
               encontrou = 0;
               break;
           }
       }
       if(encontrou)
       {
           cont++;
       }
    }
    
    printf("%d", cont);
    return 0;
}
