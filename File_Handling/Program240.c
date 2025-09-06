#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[10] = {'\0'} ;                   

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

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
            memset(Buffer,'\0',10); 
        }


        close(fd);
    }


    return 0;
}



// define O_RDONLY 5  // internally -O_RDONLY
// define O_WRONLY 4