#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int main()
{
    int iRow = 0;
    IPTR Arr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iRow);
    
    Arr = (IPTR)malloc(sizeof(int) * iRow);

    return 0;
}