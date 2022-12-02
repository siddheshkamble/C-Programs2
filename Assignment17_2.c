
#include<stdio.h>
#include<stdlib.h>

int LargestNum(int Arr[], int iSize)
{
    int iCnt = 0, iSmall = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
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

    iRet = LargestNum(ptr, iLenght);
    printf("Smallest number is : %d\n", iRet);
    
    free(ptr);
    return 0;
}
