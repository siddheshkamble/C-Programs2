

#include<stdio.h>
#include<stdlib.h>

int CheckNumber(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;
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

    iRet = CheckNumber(ptr, iLenght, iValue);

    printf("Return Frequency of %d is %d \n", iValue, iRet);
    

    free(ptr);
    return 0;
}
