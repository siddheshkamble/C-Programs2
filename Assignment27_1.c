#include<stdio.h>
#include<stdbool.h>

bool CheckCharcter(char *str, char ch)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<=str[iCnt]; iCnt++)
    {
        if(str[iCnt]== ch)
        {
            break;
        }
        str++;
    }
    if(str[iCnt]== ch)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[30];
    char c = '\0';
    bool bRet = false;

    printf("Enter the string : \n");
    scanf(" %[^'\n']s", Arr);

    printf("Enter the character to find : \n");
    scanf(" %c", &c);

    bRet = CheckCharcter(Arr,c);
    if(bRet == true)
    {
        printf("The character %c is present in string \n", c);
    }
    else
    {
        printf("The character %c is not present in string \n", c);
    }
    return 0;
}