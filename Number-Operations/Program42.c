#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    
    return bFlag ;

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