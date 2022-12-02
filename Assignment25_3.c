#include<stdio.h>

int FrequencyDiff(char *str)
{
    int cCnt = 0;
    int sCnt = 0;

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            cCnt++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            sCnt++;
        }
        str++;
    }
    return (sCnt-cCnt);
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = FrequencyDiff(Arr);

    printf("Difference between small and capital letters are : %d\n", iRet);

    return 0;
}