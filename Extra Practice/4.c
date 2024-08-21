#include <stdio.h>

int main()

{
    int a, b, c, d, e;

    printf("Enter value of a,b,c,d,e:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is max");
        }

        else
        {
            printf("c is max");
        }
    }

    else
    {
        if (b > c)
        {
            printf("b is max");
        }

        else
        {
            printf("c is max");
        }
    }

    if (a > d)
    {
        printf("a is max");
    }

    else
    {
        printf("d is max");
    }

    if (a > e)
    {
        printf("a is max");
    }

    else
    {
        printf("e is max");
    }

    if (b > d)
    {
        printf("b is max");
    }

    else
    {
        printf("d is max");
    }

    if (b > e)
    {
        printf("b is max");
    }

    else
    {
        printf("e is max");
    }

    if (c > d)
    {
        printf("c is max");
    }

    else
    {
        printf("d is max");
    }

    if (c > e)
    {
        printf("c is max");
    }

    else
    {
        printf("e is max");
    }

    if (d > e)
    {
        printf("d is max");
    }

    else
    {
        printf("e is max");
    }
}