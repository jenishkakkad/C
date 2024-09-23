#include<stdio.h>

int main()

{
    int J = 0;
    int R = 16;

    // 1
    // 23
    // 456
    // 78910
    // 1112131415

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            J++;
            printf("%d", J);
        }
        printf("\n");
    }


    printf("\n");


    // flip pattern

    // 1514131211
    // 10987
    // 654
    // 32
    // 1

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            R--;
            printf("%d", R);
        }
        printf("\n");
    }
}