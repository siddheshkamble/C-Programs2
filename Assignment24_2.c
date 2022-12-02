#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch-32;
        printf("character is %c\n",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch+32;
        printf("character is %c\n",ch);
    }
    else
    {
        printf("Invalid input %c\n",ch);
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