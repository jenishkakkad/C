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

    else if (a > d)
    {
        if (a > e)
        {
            printf("a is max");
        }

        else
        {
            printf("e is max");
        }
    }

    else if (b > c)
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

    else if (b > e)
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

    else if (c > d)
    {
        if (c > e)
        {
            printf("c is max");
        }

        else
        {
            printf("e is max");
        }
    }

    else if (c > a)
    {
        if (c > b)
        {
            printf("c is max");
        }

        else
        {
            printf("b is max");
        }
    }

    else if (d > a)
    {
        if (d > b)
        {
            printf("d is max");
        }

        else
        {
            printf("b is max");
        }
    }

    else if (d > c)
    {
        if (d > e)
        {
            printf("d is max");
        }

        else
        {
            printf("e is max");
        }
    }

    else if (e > a)
    {
        if (e > b)
        {
            printf("e is max");
        }

        else
        {
            printf("b is max");
        }
    }

    else if(e>c)
    {
       printf("e is max");
    }

    else
    {
        printf("c is max");
    }
}