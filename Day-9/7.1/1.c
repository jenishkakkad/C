#include<stdio.h>

int main()

{
   
    // 1
    // 21
    // 321
    // 4321
    // 54321

    for ( int row = 1;  row<=5 ; row++)
    {
        for ( int col = row; col >=1; col--)
        {
            printf("%d",col);
        }
        printf("\n");

    }
}