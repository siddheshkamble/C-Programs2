#include<stdio.h>
#include<stdbool.h>

bool CheckVowels(char *str)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if(*str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u'||*str == 'A'||*str == 'E'||*str == 'I'||*str == 'O'||*str == 'U')
        {
            bFlag =true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[30];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowels(Arr);
    if(bRet == true)
    {
        printf("The string is contains vowels\n");
    }
    else
    {
        printf("The string is not contains vowels\n");
    }

    return 0;
}