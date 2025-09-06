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

    icnt = iCount;
    while(icnt > 0)
    {
        printf("%c",*str);
        icnt--;
        str--;
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