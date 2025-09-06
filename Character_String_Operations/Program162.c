#include<stdio.h>

void Display(char str[])
{
    printf("%C\n",str[0]);
 

    printf("%C\n",str[1]);
   

    printf("%C\n",str[2]);
   

    printf("%C\n",str[3]);
    
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
