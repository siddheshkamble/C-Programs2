#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A')
    {
        printf("Your exam at 7:00 AM \n");
    }
    else if(ch == 'B')
    {
        printf("Your exam at 8:30 AM \n");
    }
    else if(ch == 'C')
    {
        printf("Your exam at 9:20 AM \n");
    }
    else if(ch =='D')
    {
        printf("Your exam at 10:30 AM \n");
    }
    else
    {
        printf("Invalid Inputs\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Division : \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}