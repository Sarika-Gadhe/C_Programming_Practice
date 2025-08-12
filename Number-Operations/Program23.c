#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    bool bResult = false;
   
    if(((iNo % 3)==0) && ((iNo % 5)==0) )
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult;
}
int main()
{
    int iValue = 0;
    bool bRet = false;


    printf("Enter number to check whether it is divisible by 3 and 5 : ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);


    if(bRet == true)
    {
        printf("%d is Divisible by 5 and 3",iValue);
    }
    else
    {
        printf("%d is  not Divisible by 5 or 3 ",iValue);
    }

    return 0;



}