//Input : InDia
//Output : I$D$$

#include<stdio.h>

void Change(char *str)
{

    while(*str != '\0')
    {   
        if((*str >= 'a' ) && (*str <= 'z' ))
        {
            *str = '$';
        }
        str++; 
         
    }
    
}

int main()
{
    char Arr[50] = {'\0'};

   
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);


    Change(Arr);

    printf("updated string : %s\n",Arr);

  

    return 0;
}
