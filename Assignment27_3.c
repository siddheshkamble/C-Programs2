#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    int iFreq = 0;
    
    while(*str != '\0')
    {
        if(str[iCnt]== ch)
        {
            break;  
        }
        iFreq++;
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

    iRet = FirstChar(Arr,c);
    printf("Character Location is :%d\n", iRet);
    
    return 0;
}