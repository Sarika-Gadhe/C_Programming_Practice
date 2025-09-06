#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024       //user define macro

int main()
{   
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0,iCapCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'} ;                 //os buffer internally 1KB       

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);                     

    if(fd == -1)
    {    
         printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE); 

        }
        printf("Number of Capital Character are : %d\n",iCapCount);
        
        close(fd);
    }


    return 0;
}



