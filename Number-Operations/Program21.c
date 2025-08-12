#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    return ((iNo % 2)==0);
}
int main()
{
    int iValue = 0;
    bool bRet = false;


    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);


    if(bRet == true)
    {
        printf(" %d is even Number ",iValue);
        
    }
    else
    {
        printf("%d is odd Number ",iValue);
    }

    return 0;



}