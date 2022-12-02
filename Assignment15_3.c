

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int i = 0;
    bool bRet = false;
    int iValue = 0;

    printf("Enter the number you want to store \n");
    scanf("%d", &iLenght);

    ptr = (int*)malloc(iLenght * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iLenght; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The number you want to find \n");
    scanf("%d", &iValue);

    bRet = CheckNumber(ptr, iLenght, iValue);

    if(bRet == true)
    {
        printf("%d is present \n", iValue);
    }
    else
    {
        printf("%d is absent \n", iValue);
    }

    free(ptr);
    return 0;
}
