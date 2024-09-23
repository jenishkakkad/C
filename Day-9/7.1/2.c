#include<stdio.h>

int main()

{

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
}