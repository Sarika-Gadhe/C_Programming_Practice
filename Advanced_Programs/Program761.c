#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
typedef int ** IPPTR;

void Accept(int **Arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    
    printf("Enter the elements : \n");
    
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

}

void Display(int **Arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    
    printf("Elements of the matrix are : \n");

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");

    }
}


int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0;

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

    Accept(Arr,iRow, iCol);
    Display(Arr, iRow, iCol);

   

    return 0;
}