#include <stdio.h>

int main()

{
    // 1
    // 22
    // 333
    // 4444
    // 55555

    for ( int row = 1;  row<=5 ; row++)
    {
        for ( int col = 1; col <=row; col++)
        {
            printf("%d",row);
        }
        printf("\n");

    }

    // for ( int row = 1;  row<=5 ; row++)
    // {
    //     for ( int col = 1; col <=row; col++)
    //     {
    //         printf("%d",row);
    //     }
    //     printf("\n");

    // }
}