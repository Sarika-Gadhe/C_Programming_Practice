#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt > (iNo/2))
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
    int iValue = 0 ;
    bool iRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet = CheckPrime(iValue);

    if(iRet == true)
    {
        printf("%d Number is prime",iValue);

    }
    else
    {
        printf("%d Number is not prime number",iValue);
    }

    return 0;

}