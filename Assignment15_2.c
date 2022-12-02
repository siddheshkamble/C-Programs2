

#include<stdio.h>
#include<stdlib.h>

int CheckFrequencyDiff(int Arr[], int iSize)
{
    int iCnt = 0, iEvenFrequency = 0, iOddFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEvenFrequency++;
        }
        else
        {
            iOddFrequency++;
        }
    }
    printf("Even Number Frequency is : %d\n", iEvenFrequency);
    printf("Odd Number Frequency is : %d\n", iOddFrequency);

    return (iEvenFrequency - iOddFrequency);
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

    iRet = CheckFrequencyDiff(ptr, iLenght);
    printf("Frequency Difference of Even and Odd number is %d\n", iRet);

    free(ptr);
    return 0;
}
