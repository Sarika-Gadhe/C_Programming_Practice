#include<stdio.h>

void DisplayFactors(int iNo)
{
   
    int iCnt = 0 ;

    if(iNo < 0)                                 //updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt < iNo ;iCnt++)             //time complexity O(n)
    {
        if((iNo % iCnt)==0)
        {
            printf("Factor is %d\n",iCnt);
        }
        else
        {
            printf("Non factor is %d\n",iCnt);
        }
    }
}   

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    // printf("Factor is %d:",iValue);

    return 0;



}