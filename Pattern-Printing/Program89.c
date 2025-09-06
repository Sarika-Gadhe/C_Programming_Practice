// Input : 4 
// Output : 
/* 
    * * * 
    * * *
    * * * 
*/






#include<stdio.h>


void Display()
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= 3 ;i++)
    {
        for(j = 1; j <=3 ;j++)
        {
             printf("*\t");
        }    
         printf("\n");
    }
}

int main()
{

    
   

    Display();

    return 0;
}

// Time Complexity O(N)
// N is natural number
// where N >= 0 and N <= Infinity