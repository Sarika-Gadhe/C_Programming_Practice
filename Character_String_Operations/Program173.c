#include<stdio.h>

void CountCapitalSmall(char *str)
{
   int iCountCapital = 0;
   int iCountSmall = 0;


    while(*str != '\0')
    {   
        if((*str >= 'a') && (*str <='z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <='Z'))
        {
            iCountCapital++; 
        }
        
        str++; 
         
    }
    printf("Small letters are : %d\n",iCountSmall);
    printf("Capital letters are : %d",iCountCapital);
    
}

int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmall(Arr);

    return 0;
}
