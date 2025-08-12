#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt  == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    if(iNo == iSum)
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
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d Number is perfect",iValue);

    }
    else
    {
        printf("%d Number is not perfect number",iValue);
    }

    return 0;

}