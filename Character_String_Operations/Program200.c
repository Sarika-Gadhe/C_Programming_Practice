#include<stdio.h>
//complexity = n + n/2 (did)
void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[50] = {'\0'};
    

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("string after reversal : %s\n",Arr);
  
   
    return 0;
}



// Time Complexity O(n + n/2)