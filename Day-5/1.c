#include <stdio.h>

int main()

{
    int first, second;

    printf("Enter values of first and second number:");
    scanf("%d%d", &first, &second);

    if (first < second)
    {
        printf("The minimum value is:%d",first);
    }

    else
    {
        printf("The minimum value is:%d",second);
    }
}