#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

int Maximum(IPPTR Arr, int iRow, int iCol)
{
    int iMax = 0, i = 0 , j = 0;

    iMax = INT_MIN;             // smallest possible value 

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           if(iMax < Arr[i][j])
           {
                iMax = Arr[i][j];
           }
        }
    }

    return iMax;
}

int Minimum(IPPTR Arr, int iRow, int iCol)
{
    int iMin = 0, i = 0 , j = 0;

    iMin = INT_MAX;            

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           if(iMin > Arr[i][j])
           {
                iMin = Arr[i][j];
           }
        }
    }

    return iMin;
}

void MaximumRow(IPPTR Arr, int iRow, int iCol)
{
    int iMax = 0, i = 0 , j = 0;

    iMax = INT_MIN;            

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           if( Arr[i][j] > iMax )
           {
                iMax = Arr[i][j];
           }
        }

        printf("Maximum element form row no : %d is : %d\n", i , iMax);
    }


}

void MaximumMinimum(IPPTR Arr, int iRow, int iCol)          //Time Complexity is N^2
{
    int iMax = 0,iMin = 0, i = 0 , j = 0;

    iMax = INT_MIN; 
    iMin = INT_MAX;           

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           if(iMax < Arr[i][j])
           {
                iMax = Arr[i][j];
           }
           
           if(iMin > Arr[i][j])
           {
                iMin = Arr[i][j];
           }
        }
    }

    printf("Maximum  elements is : %d\n", iMax);
    printf("Minimum  elements is : %d\n", iMin);
}

int SummationBorder(IPPTR Arr, int iRow, int iCol)
{
    int iSum = 0, i = 0 , j = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == 0 || i == iRow-1 || j == 0 || j == iCol-1)
            {
                iSum = iSum + Arr[i][j];
            }
            
            
        }
    }

    return iSum;
}

int SummationEvenRow(IPPTR Arr, int iRow, int iCol)   // Time Complexity O(N^2)
{
    int iSum = 0, i = 0 , j = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if( (i % 2) != 0)
            {
                iSum = iSum + Arr[i][j];
            }
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

    
    iRet = SummationEvenRow(Arr,iRow, iCol);

    printf("Summation of Even Row is : %d\n", iRet);

    // MaximumRow(Arr,iRow, iCol);
  

    //  Deallocate memory of matrix

    for(i = 0;  i < iRow; i++)
    {
        free(Arr[i]);
    }
   
    free(Arr);

    return 0;
}