#include<stdio.h>

int main()

{
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

    // flip

    // 54321
    // 5432
    // 543
    // 54
    // 5

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
}