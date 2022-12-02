#include<stdio.h>

void Display(char ch)
{
    char cCnt = '\0';
    for(cCnt = ch; cCnt >= 'a'; cCnt--)
    {
        printf("%c\t",cCnt);
    }
    for(cCnt = ch; cCnt <= 'Z'; cCnt++)
    {
        printf("%c\t",cCnt);
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