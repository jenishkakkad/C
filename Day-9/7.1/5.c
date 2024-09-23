#include<stdio.h>

int main()

{
    // 11111
    // 2222
    // 333
    // 44
    // 5

    for ( int row = 1; row <= 5; row++)
    {
        for ( int col = row; col <= 5; col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }

    // 2 ji rit

    for ( int row = 1; row <= 5; row++)
    {
        for ( int col = 5; col >= row; col--)
        {
            printf("%d",row);
        }
        
        printf("\n");

    }

}