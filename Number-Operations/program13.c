#include<stdio.h>
//Itertion

void Display(int iNumber)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt<=5; iCnt++)
   {
        printf("%d\n",iNumber);
   }
}
int main()
{
    int iValue = 0;
  
    printf("Enter user Input \n");
    scanf("%d",&iValue);
     
    Display(iValue);
     
    return 0;
}