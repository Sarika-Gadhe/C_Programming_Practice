// Digits Problem
// Armstrong number


#include<stdio.h>   
#include<stdbool.h>
       
//  Input : 153
//  Output : 1^3 + + 5^3 + 1^3
//           1 + 125 + 27
//           153
//           true

//  Input : 6743
//          6^4 + 7^4 + 4^4 + 3^4            = base = number of digit


int Power(int A, int B)
{
    int Result = 1;
    int i = 0;

    for(i = 1; i <= B ;i++)
    {
        Result = Result * A;
    }

    return Result;
}

int CountDigits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

bool CheckArmstrong(int iNo)
{
    int iSum = 0,iTemp = iNo;
    int iCount = 0, iDigit = 0;
    
    iCount = CountDigits(iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit,iCount);
        iNo = iNo / 10;

    }

    return (iTemp == iSum);
}

int main()
{
   
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }

    

 

   
    return 0;
}