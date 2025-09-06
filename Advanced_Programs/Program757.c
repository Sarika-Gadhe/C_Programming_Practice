#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iRow = 0;
    int *Arr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iRow);
    
    Arr = (int *)malloc(sizeof(int) * iRow);

    return 0;
}