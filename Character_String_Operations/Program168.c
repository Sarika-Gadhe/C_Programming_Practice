#include<stdio.h>

int StrlenX(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {   
        return -1;
    }

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
  return iCount;   
    
    
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
   
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);


    iRet =StrlenX(Arr);

    printf("Number of character is : %d",iRet);

    return 0;
}
