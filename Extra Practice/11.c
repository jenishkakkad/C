#include <stdio.h>

int main()

{
    int a, b, c, d;

    printf("Enter value of a,b,c,d:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("a is max");
            }

            else

            {
                printf("d is max");
            }
        }

        else
        {
            if (c > d)
            {
                printf("c is max");
            }

            else
            {
                printf("d is max");
            }
        }
    }

    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is max");
            }

            else
            {
                printf("d is max");
            }
        }

        else
        {
            if (b > a)
            {
                printf("b is max");
            }

            else
            {
                printf("a is max");
            }
        }
    }
}