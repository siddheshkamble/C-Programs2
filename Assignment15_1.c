// Return the frequency of even number

#include<stdio.h>
#include<stdlib.h>

int CheckFrequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
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

    printf("Enter the number you want to store \n");
    scanf("%d", &iLenght);

    ptr = (int*)malloc(iLenght * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iLenght; i++)
    {
        scanf("%d", &ptr[i]);
    }

    iRet = CheckFrequency(ptr, iLenght);
    printf("Frequency of Even number is %d\n", iRet);

    free(ptr);
    return 0;
}
