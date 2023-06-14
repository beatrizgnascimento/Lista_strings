#include <stdio.h>
#include <stdlib.h>
int main()
{
    char F[90];
    int I, J, i = 0;
    
    scanf("%[^\n]", F);
    scanf("%d %d", &I, &J);
   
  for (i = I; i <= J; i++)
    {
        printf("%c", F[i]);
    }
    
    return 0;
}
