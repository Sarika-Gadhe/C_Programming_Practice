#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
   
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;


    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);


    if(bRet == true)
    {
        printf("%d is Number even ",iValue);
    }
    else
    {
        printf("%d is odd Number ",iValue);
    }

    return 0;



}