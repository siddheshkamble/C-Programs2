#include<stdio.h>

void Display(char ch)
{
    int iCnt = '\0';
    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        if(ch == iCnt)
        {
            printf("Decimal : %d\n",iCnt);
            printf("Octal : %o\n", iCnt);
            printf("Hexodecimal : %x\n", iCnt);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}