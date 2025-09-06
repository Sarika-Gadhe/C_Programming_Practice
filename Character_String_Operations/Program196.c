#include<stdio.h>

void ReverseDisplay(char *str)
{
    int iCount = 0;
    int icnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;

    for(icnt = iCount; icnt > 0 ;icnt--,str--)
    {
        printf("%c",*str);
    }
    printf("\n");
}
int main()
{
    char Arr[50] = {'\0'};
    

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

  
   
    return 0;
}