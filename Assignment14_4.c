// Number is divisible by 3 & 5

#include<stdio.h>
#include<stdlib.h>

void DisplayDivisible(int Arr[], int iLenght)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt]%3 == 0 && Arr[iCnt]%5 == 0)
        {
            printf("%d Number is divisible by 3 & 5 \n", Arr[iCnt]);
        }
        else{}
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int i = 0;

    printf("Enter the number of element you want to store :\n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    DisplayDivisible(ptr, iSize);

    free(ptr);
    return 0;
}