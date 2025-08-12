#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
   
    int iCnt = 0 ;
    int iSum=0;

    if(iNo < 0)                                 //updator
    {
        iNo = -iNo;
    }  

    for(iCnt = 1;iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
                printf("%d\n",iCnt);
                iSum = iSum + iCnt;
           
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else{
        return false;
    }
}   

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number : ");
    scanf("%d",&iValue);

    
    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d Number is perfect number",iValue);
    }
    else
    {
        printf("%d number is not perfect number ",iValue);
    }

   

    return 0;



}