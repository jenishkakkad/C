#include <stdio.h>

int main()

{
    int a, b, c;

    printf("Enter value of JK,JR,RK:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a == c)
        {
            printf("a is max\n");
            printf("SAME VALUES ARE NOT ALLOWED");
        }
        else
        {
            printf("c is max");
        }
    }

    else if (a == b || a == c || b == c || b == a || a == b == c)
    {
        printf("SAME VALUES ARE NOT ALLOWED");
    }

    else if (b > c)
    {
        if (b == a)
        {
            printf("b is max\n");
            printf("SAME VALUES ARE NOT ALLOWED");
        }

        else
        {
           printf("c is max");
        }

    }

    else if (c > a)
    {
        if (c == b)
        {
            printf("c is max\n");
            printf("SAME VALUES ARE NOT ALLOWED");
        }

        else
        {
            printf("b is max");
        }
    }

    
    

    else
    {
        if (b > c)
        {
            // if (b == a)
            // {
            //     printf("b is max\n");
            //     printf("SAME VALUES ARE NOT ALLOWED");
            // }

            // else
            // {
                printf("b is max");
            // }
        }

        else
        {
            // printf("c is max");
        }
    }
}