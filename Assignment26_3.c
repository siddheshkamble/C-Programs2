#include<stdio.h>            

void ModStr(char *str)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<=str[iCnt]; iCnt++)
    {
        if(str[iCnt]>=97 && str[iCnt]<= 122)
        {
            str[iCnt] = str[iCnt] - 32;
        }
        else
        {
            str[iCnt] = str[iCnt] + 32;
        }
    }
    printf("Modified string is : %s\n",str);
}

int main()
{
    char Arr[30];

    printf("Enter the string : \n");
    scanf(" %[^'\n']s", Arr);

    ModStr(Arr);

    

    return 0;
}