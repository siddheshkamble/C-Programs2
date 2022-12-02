#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
// #include<unistd.h>   for linux and mac to write the data into the file because c & c++ platform dependent language

int main()
{
    char Fname[20];
    int fd = 0;     //fd = file descriptive
    char Data[20];

    printf("Please enter file name that you want to read\n");
    scanf("%s", Fname);

    fd = open(Fname,O_RDWR); // O_RDDNLY O_WRONLY O_RDWR
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    read(fd,Data,10);
    printf("Data from file is %s\n", Data);

    close(fd);

    return 0;
}