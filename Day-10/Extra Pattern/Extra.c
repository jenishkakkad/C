#include <stdio.h>

int main()

{
    // 11111
    // 2222
    // 333
    // 44
    // 5

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d", row);
        }

        printf("\n");
    }

    // 5
    // 54
    // 543
    // 5432
    // 54321

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }

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

    // 11111
    // 2222
    // 333
    // 44
    // 5

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // 12345
    // 1234
    // 123
    // 12
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    // 55555
    // 4444
    // 333
    // 22
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // 55555
    // 4444
    // 333
    // 22
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // *****
    // ****
    // ***
    // **
    // *

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // *****
    // ****
    // ***
    // **
    // *

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 54321
    // 4321
    // 321
    // 21
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    // 55555
    // 4444
    // 333
    // 22
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // *****
    // ****
    // ***
    // **
    // *

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
    }

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

    // 11111
    // 2222
    // 333
    // 44
    // 5

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // *****
    // ****
    // ***
    // **
    // *

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 1
    // 22
    // 333
    // 4444
    // 55555

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
    }

    // for ( int row = 5;  row >= 1; row--)
    // {
    //     for ( int space = row; space<=row-1; space++)
    //     {
    //         for (int col i = 0; i < count; i++)
    //         {
    //             /* code */
    //         }

    //     }

    //     printf("\n");

    // }

    // printf("\n");

    // *****
    // ****
    // ***
    // **
    // *

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 2 ji rit

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 3 ji rit

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
    }

    // *
    // **
    // ***
    // ****
    // *****

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 2 ji rit

    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col <= 5; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 3 ji rit

    for (int row = 10; row >= 5; row--)
    {
        for (int col = row; col <= 10; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 12345
    // 12345
    // 12345
    // 12345
    // 12345

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

}