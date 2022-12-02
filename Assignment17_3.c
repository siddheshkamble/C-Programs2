
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSmall = Arr[0], iLarge = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
        else if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    printf("Smallest Number is : %d\n", iSmall);
    printf("Largest Number is : %d\n", iLarge);

    return (iLarge - iSmall);
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int i = 0, iRet = 0;

    printf("Enter the number you want to store \n");
    scanf("%d", &iLenght);

    ptr = (int*)malloc(iLenght * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iLenght; i++)
    {
        scanf("%d", &ptr[i]);
    }

    iRet = Difference(ptr, iLenght);
    printf("Difference number is : %d\n", iRet);
    
    free(ptr);
    return 0;
}
