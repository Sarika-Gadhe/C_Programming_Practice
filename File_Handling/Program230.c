#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",fd);
        close(fd);
    }


    return 0;
}