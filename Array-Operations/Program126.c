#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0,iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //step 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the element : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    //Step 2 : Use that memory
    Display(ptr,iLength);
    //use 

    //Step 3 : Free the memory

    free(ptr);

    return 0;
}