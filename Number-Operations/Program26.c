#include<stdio.h>

int Summation(int iNo)
{
    
   int iFact = 1;
   int iCnt = 0;
   for(iCnt= 1; iCnt <= iNo;iCnt++)
   {
        iFact = iFact * iCnt;
       
   }
   return iFact;
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);


    printf("Factorial  is :%d",iRet);

    return 0;



}