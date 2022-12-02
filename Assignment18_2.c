#include<stdio.h>

void PatternDisplay(int iRow)
{
    int i = 0, j = 0;
    
    for(i = iRow; i>=1; i--)
    {
        printf("%d \t # \t", i);
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