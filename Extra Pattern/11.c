#include<stdio.h>

int main()

{
    // 55555
    // 4444
    // 333
    // 22
    // 1

    for ( int row = 5; row >= 1; row--)
    {
        for ( int col= 1; col <= row; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }

    // 2 ji rit

    for ( int row = 5; row >= 1; row--)
    {
        for ( int col= row; col >= 1; col--)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}