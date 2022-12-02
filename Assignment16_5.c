
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
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

    iRet = Product(ptr, iLenght);
    printf("The product of all odd return number is : %d\n", iRet);
    
    free(ptr);
    return 0;
}
