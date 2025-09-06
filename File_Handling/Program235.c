#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[] = "India is my country";

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_CREAT | O_WRONLY | O_APPEND);                     //change macro

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written succesfully\n",iRet);

        close(fd);
    }


    return 0;
}



// define O_RDONLY 5  // internally -O_RDONLY
// define O_WRONLY 4