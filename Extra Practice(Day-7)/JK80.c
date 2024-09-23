#include<stdio.h>

int main()

{
    int N;

    for ( char row = 'A'; row <= 'D'; row++)
    {
        for ( char col= 'A'; col <= row; col++)
        {
            printf("%c",col);
        }
        printf("\n");
    }
    
        // printf("%c\t",row);
    
}