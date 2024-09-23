#include<stdio.h>

int main()

{
 
    // A
    // BA
    // CBA
    // DCBA
    // EDCBA

    for (int row = 'A'; row <= 'E'; row++)
    {
        for (int col = row; col >= 'A'; col--)
        {
            printf("%c", col);
        }
        printf("\n");
    }

    // 2 JI RIT

    for (int row = 65; row <= 69; row++)
    {
        for (int col = row; col >= 65; col--)
        {
            printf("%c", col);
        }
        printf("\n");
    }
}