#include<stdio.h>
#include <string.h>

// int FirstChar(char *str)
// {
//     char cDigit = '\0';
//     char c = '\0';

//     while(*str != '\0')
//     {
//         cDigit = str%10;
//         c = str/10;
//     }
//     printf("%s", str);
// }

int main()
{
    char Arr[30];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    strrev(Arr);

    //iRet = FirstChar(Arr);
    printf("Reverse string is %s\n", Arr );
    
    return 0;
}