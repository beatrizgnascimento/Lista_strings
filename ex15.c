#include <stdio.h>
#include <string.h>
int main()
{
    long long int num;
    char cpf[20];
    int cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4= 0, cont5 = 0, cont6 = 0, cont7 = 0, cont8 = 0, cont9 = 0, i = 0;
    
    scanf("%lld", &num); 
    sprintf(cpf, "%lld", num);
    
    for(i = 0; i < strlen(cpf); i++)
    {
        if(cpf[i] == '0')
        {
            cont0++;
        }
        else if(cpf[i] == '1')
        {
            cont1++;
        }
        else if(cpf[i] == '2')
        {
            cont2++;
        }
        else if(cpf[i] == '3')
        {
            cont3++;
        }
        else if(cpf[i] == '4')
        {
            cont4++;
        }
        else if(cpf[i]== '5')
        {
            cont5++;
        }
        else if(cpf[i] == '6')
        {
            cont6++;
        }
        else if(cpf[i] == '7')
        {
            cont7++;
        }
        else if(cpf[i] == '8')
        {
            cont8++;
        }
        else if(cpf[i] == '9')
        {
            cont9++;
        }
    }
    
    printf("0 = %d\n1 = %d\n2 = %d\n3 = %d\n4 = %d\n5 = %d\n6 = %d\n7 = %d\n8 = %d\n9 = %d\n", cont0, cont1, cont2, cont3, cont4, cont5, cont6, cont7, cont8, cont9);
    
    return 0;
}
