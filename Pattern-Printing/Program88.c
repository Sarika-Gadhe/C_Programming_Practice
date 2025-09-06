// Input : 4 
// Output : 
/* 
    * * * 
    * * *
    * * * 
*/


// Sequence of iteration




#include<stdio.h>


void Display()
{
    int j = 0;

    for(j = 1; j <=3 ;j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <=3 ;j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <=3 ;j++)
    {
        printf("*\t");
    }
    printf("\n");

}

int main()
{

    
   

    Display();

    return 0;
}

// Time Complexity O(N)
// N is natural number
// where N >= 0 and N <= Infinity