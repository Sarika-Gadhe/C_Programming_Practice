#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[50] = {'\0'} ;                   

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);                     //change 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",fd);

        iRet = read(fd,Buffer,11);                        //buffer = call by address

        printf("%d bytes gets read succesfully\n",iRet);

        printf("Data from file is : %s",Buffer);

        close(fd);
    }


    return 0;
}



// define O_RDONLY 5  // internally -O_RDONLY
// define O_WRONLY 4