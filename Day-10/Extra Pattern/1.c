#include <stdio.h>

int main()

{
    // 12345
    // 2345
    // 345
    // 45
    // 5

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    printf("\n");

    // flip pattern

    // 5
    // 45
    // 345
    // 2345
    // 12345

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    // for ( int row = 5;  row>=1 ; row--)
    // {
    //     for ( int col = row; col <=5; col++)
    //     {
    //         printf("5");
    //     }
    //     printf("\n");

    // }
    
    // for ( int row = 1;  row<=5; row++)
    // {
    //     for ( int col = 1; col <=row; col++)
    //     {
    //         printf("5");
    //     }
    //     printf("\n");

    // }
}