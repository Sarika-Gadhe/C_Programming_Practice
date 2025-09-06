#include<stdio.h>
#include<stdbool.h>

//case sensitive
bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    

    start  = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }
    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
   

    
}
int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;
    

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true )
    {
        printf("String is  pallindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }
  
   
    return 0;
}

