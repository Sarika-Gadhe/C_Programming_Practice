
//Input : InDia
//Output : INDIA

#include<stdio.h>

void StrlwrX(char *str)
{

    while(*str != '\0')
    {   
        if((*str >= 'A' ) && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        str++; 
         
    }
   
    
}

int main()
{
    char Arr[50] = {'\0'};

   
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);


    StrlwrX(Arr);

    printf("updated string : %s\n",Arr);

  

    return 0;
}
