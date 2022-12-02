#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("%c is a capital letter\n", cValue);
    }
    else
    {
        printf("%c is a not capital letter\n", cValue);
    }

    return 0;
}