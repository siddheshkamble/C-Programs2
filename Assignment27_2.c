#include<stdio.h>

int CheckCharcter(char *str, char ch)
{
    int iCnt = 0;
    int iFreq = 0;

    while(*str != '\0')
    {
        if(str[iCnt]== ch)
        {
            iFreq++;
        }
        str++;
    }
    return iFreq;
}

int main()
{
    char Arr[30];
    char c = '\0';
    int iRet=0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character to find : \n");
    scanf(" %c", &c);

    iRet = CheckCharcter(Arr,c);
    printf("%d number of times \n", iRet);
    
    return 0;
}