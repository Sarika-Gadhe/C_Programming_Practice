#include<stdio.h>

void CountCapitalSmallDigit(char *str)
{
   int iCountCapital = 0;
   int iCountSmall = 0;
   int iCountDigit = 0;


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
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
           
        
        str++; 
         
    }
    printf("Small letters are : %d\n",iCountSmall);
    printf("Capital letters are : %d\n",iCountCapital);
    printf("Digit are : %d",iCountDigit);
    
    
}

int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmallDigit(Arr);

    return 0;
}
