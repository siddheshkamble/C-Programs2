#include<stdio.h>

char Reverse(char *str)
{
    char cDigit ='\0';
    char cNo = *str;

    while (*str != '\0')
    {
        cDigit = *str % 10;
        cNo = cNo/10;
        str++;
    }
    return cDigit;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    char cRet = '\0';

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    cRet = Reverse(Arr);
    
    printf("The reverse string is : %c\n", cRet);

    return 0;
}