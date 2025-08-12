#include<stdio.h>

int SumFactors(int iNo)
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
    return iSum;
}   

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    
    iRet = SumFactors(iValue);

    printf("Sum of factor is : %d",iRet);

    return 0;



}