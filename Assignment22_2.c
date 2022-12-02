#include<stdio.h>

void PatternDisplay(int iRow, int iCol)
{
    int i = 0, j = 0;
    int n = iCol+1;

    if(iRow != iCol)
    {
        return;
    }
    
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if(n-i-j)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter thr number of columns \n");
    scanf("%d", &iValue2);

    PatternDisplay(iValue1, iValue2);

    return 0;
}