#include<stdio.h>
//Itertion

int CalculateSum(int iNumber)
{
   int iCnt = 0,iSum = 0 ;

   for(iCnt = 1; iCnt <= iNumber; iCnt++)
   {
        iSum = iSum + iCnt;

   }
   return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
  
    printf("Enter the frequency \n");
    scanf("%d",&iValue);
     
    iRet=CalculateSum(iValue);
    printf("Summation is %d\n",iRet);
     
    return 0;
}