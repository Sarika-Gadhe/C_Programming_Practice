#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{   
    char Fname[20] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[1024] = {'\0'} ;                 //os buffer internally 1KB       

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

        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            // printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',sizeof(Buffer)); 
        }


        close(fd);
    }


    return 0;
}



