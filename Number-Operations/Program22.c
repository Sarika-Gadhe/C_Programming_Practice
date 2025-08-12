#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    bool bResult = false;
   
    if((iNo % 5)==0)
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


    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);


    if(bRet == true)
    {
        printf(" %d is Divisible by 5 ",iValue);
    }
    else
    {
        printf("%d is  not Divisible by 5 ",iValue);
    }

    return 0;



}