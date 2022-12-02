
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt]<999)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLenght = 0;
    int *ptr = NULL;
    int i = 0;

    printf("Enter the number you want to store \n");
    scanf("%d", &iLenght);

    ptr = (int*)malloc(iLenght * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iLenght; i++)
    {
        scanf("%d", &ptr[i]);
    }

    Digits(ptr, iLenght);
    
    free(ptr);
    return 0;
}
