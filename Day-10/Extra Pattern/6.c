#include<stdio.h>

int main()

{
    // 5
    // 44
    // 333
    // 2222
    // 11111
    
    for (int row = 5; row >= 1; row--)
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // 2 ji rit

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }
}