#include<stdio.h>
//Itertion

void Display(int iNumber)
{
   int iCnt = 0;

   for(iCnt = iNumber; iCnt >= 1; iCnt--)
   {
        printf("%d\n" ,iCnt);
   }
}
int main()
{
    int iValue = 0;
  
    printf("Enter the frequency \n");
    scanf("%d",&iValue);
     
    Display(iValue);
     
    return 0;
}