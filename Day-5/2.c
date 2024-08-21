#include <stdio.h>

int main()

{
    int JK;

    printf("Enter any number:");
    scanf("%d", &JK);

    if (JK < 0)
    {
        printf("This number is Negative");
    }

    else if (JK == 0)
    {
        printf("This number is Netural");
    }

    else
    {
        printf("This number is Positive");
    }
}