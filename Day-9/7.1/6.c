#include<stdio.h>

int main()

{
    // 10101
    // 1010
    // 101
    // 10
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col % 2 == 0)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    // flip pattern

    // 1
    // 10
    // 101
    // 1010
    // 10101

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col % 2 == 0)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }
        }

        printf("\n");
    }
}