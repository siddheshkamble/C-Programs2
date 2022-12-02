#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char ch)
{
    if(ch >= 'a' && ch <= 'z'|| ch >= 'A' && ch <= 'Z')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = CheckCharacter(cValue);
    if(bRet == true)
    {
        printf("It is a character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}