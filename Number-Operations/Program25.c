#include<stdio.h>

int Summation(int iNo)
{
   int iSum = 0;
   int iCnt = 0;
   for(iCnt= 1; iCnt <= iNo;iCnt++)
   {
        iSum = iSum + iCnt;
       
   }
   return iSum;
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);


    printf("Summetion is : %d",iRet);
    return 0;



}