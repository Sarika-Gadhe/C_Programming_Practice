#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
typedef int ** IPPTR;

int Summation(IPPTR Arr, int iRow, int iCol)
{
    int iSum = 0, i = 0 , j = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           iSum = iSum + Arr[i][j];
        }
    }

    return iSum;
}

void Accept(IPPTR Arr, int iRow, int iCol)
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

void Display(IPPTR Arr, int iRow, int iCol)
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
    int iRet = 0;

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

    
    iRet = Summation(Arr,iRow, iCol);

    printf("Summation of all elements is : %d\n", iRet);
    

    //  Deallocate memory of matrix

    for(i = 0;  i < iRow; i++)
    {
        free(Arr[i]);
    }
   
    free(Arr);

    return 0;
}