#include<stdio.h>

void PatternDisplay(int iRow)
{
    int i = 0, j = 0, iMult = 1;
    
    for(i = 1; i<=iRow; i++)
    {
        iMult = 2 * i;
        printf("%d \t", iMult);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iValue1);

    PatternDisplay(iValue1);

    return 0;
}