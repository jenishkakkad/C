#include<stdio.h>

int main()

{
    int C=0;

    for ( int row = 1; row <= 5; row++)
    {
        for ( int col = 1; col <= row; col++)
        {
            C++;
            printf("%d",C);
        }
        printf("\n");
    }
    
}