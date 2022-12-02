#include<stdio.h>   
#include <stdlib.h>         

int CountSpace(char str[])
{
    int i = 0;
    int space = 0;
    while (i<=str[i])
    {
        if(str[i]==' ')
        {
            space++;
        }
        i++;
    }
    return space;
}

int main()
{
    char Arr[30];
    int iret = 0;

    printf("Enter the string : \n");
    scanf(" %[^'\n']s", Arr);

    iret = CountSpace(Arr);

    printf("The number of blank spaces is : %d\n", iret);
    return 0;
}