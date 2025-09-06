#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
typedef int ** IPPTR;

int main()
{
    int iRow = 0, iCol = 0, i = 0;

    IPPTR Arr = NULL;


    printf("Enter number of rows : \n");
    scanf("%d",&iRow);
    
    printf("Enter number of columns : \n");
    scanf("%d",&iCol);
    
    Arr = (IPPTR)malloc(sizeof(IPTR) * iRow);

    for(i = 0; i < iRow; i++)
    {
        Arr[i] = (IPTR)malloc(sizeof(int) * iCol);
        
    }

    return 0;
}