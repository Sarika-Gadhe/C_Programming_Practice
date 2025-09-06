#include<stdio.h>

void Display(char str[])
{
    while(*str != '\0')
    {
        printf("%C\n",*str);
         str++;
    }
    

}    

int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);

    Display(Arr);

    return 0;
}
