
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int i = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter the number you want to store \n");
    scanf("%d", &iLenght);

    ptr = (int*)malloc(iLenght * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iLenght; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter Start Number \n");
    scanf("%d", &iValue1);

    printf("Enter End Number \n");
    scanf("%d", &iValue2);

    Range(ptr, iLenght, iValue1, iValue2);
    
    free(ptr);
    return 0;
}
