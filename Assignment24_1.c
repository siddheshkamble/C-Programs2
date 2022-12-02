#include<stdio.h>

int main()
{
    printf("_____________________________________________________\n");

    printf("ASCII Table\n");
    
    printf("_____________________________________________________\n");
    
    printf("Character \t Decimal \t Hexadecimal \t Octal \n");
    
    int i =0;
    
    for(i = 0; i<=255; i++)
    {
        printf("%c \t %d \t %x \t %o \n", i,i,i,i);
    }

    return 0;
}