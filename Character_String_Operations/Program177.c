//Input : India
//Output : IndiA

#include<stdio.h>

void Change(char *str)
{
   int iCount= 0;

    while(*str != '\0')
    {   
        if((*str == 'a' ))
        {
            *str = 'A';
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

    printf("updated Strng  : %s\n", Arr);

    return 0;
}
