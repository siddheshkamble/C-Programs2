// Difference between sum of even numbers an odd numbers

#include<stdio.h>
#include<stdlib.h>

int DisplayDiff(int Arr[], int iLenght)
{
    int iCnt = 0, iEvenSum = 0, iOddSum = 0;
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Summation of Even number is :%d\n", iEvenSum);
    printf("Summation of Odd number is :%d\n", iOddSum);
    return(iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter the number of element you want to store :\n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    iRet = DisplayDiff(ptr, iSize);
    printf("The Differencr is : %d\n", iRet);

    free(ptr);
    return 0;
}