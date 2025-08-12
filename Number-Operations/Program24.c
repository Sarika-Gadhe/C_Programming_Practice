#include<stdio.h>

int Summation(int iNo)
{
   int isum = 0;
   int iCnt = 0;
   for(iCnt= 1; iCnt <= iNo;iCnt++)
   {
        printf("%d",iCnt);
       
   }
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);


    printf("Summetion is :",iRet);
    return 0;



}