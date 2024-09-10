#include <stdio.h>

int main()

{
    int a, b, c;

    printf("Enter value of a,b,c:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            if (a > c && b == c)
            {
                printf("a is max\n");
                printf("SAME VALUES ARE NOT ALLOWED\n");
            }

            else

            {
                printf("a is max\n");
            }
        }

        else
        {
            if (a == c)
            {
                printf("SAME VALUES ARE NOT ALLOWED\n");
                printf("a and c are max");
            }

            else
            {
                printf("c is max");
            }
        }
    }

    // else if (a == b || a == c || b == c || a == b == c)
    // {
    //     printf("SAME VALUES ARE NOT ALLOWED\n");
    // }

    else if (a > c && b == c)
    {
        printf("a is max\n");
        printf("SAME VALUES ARE NOT ALLOWED\n");
    }

    else if (b == c)
    {
        if (a < c && b == c)
        {
            printf("SAME VALUES ARE NOT ALLOWED\n");
            printf("b and c are max");
        }

        // else if (b == c && a < c)
        // {
        //     printf("SAME VALUES ARE NOT AllOWED\n");
        //     printf("b and c are max");
        // }

        else if (a == b || a == c || b == c || a == b == c)
        {
            printf("SAME VALUES ARE NOT ALLOWED\n");
        }
        
        

        // else
        // {
        //     // printf("SAME VALUES ARE NOT AllOWED\n");
        // }
    }

    // else if (a == b || a == c || b == c || a == b == c)
    // {
    //     printf("SAME VALUES ARE NOT ALLOWED\n");
    // }

    else if (a == b)
    {
        if (a < c)
        {
            printf("SAME VALUES ARE NOT ALLOWED\n");
            printf("c is max");
        }

        else
        {
            printf("SAME VALUES ARE NOT ALLOWED\n");
            printf("a and b are max");
        }
    }

    // else if (b == c && a > c)
    // {
    //     printf("cdcwc");

    // }

    // else if (b > c)
    // {
    //     printf("b is max\n");
    //     // printf("SAME VALUES ARE NOT ALLOWED\n");
    // }

    else
    {
        if (b > c)
        {
            if (b > a && a == c)
            {
                printf("b is max\n");
                printf("SAME VALUES ARE NOT AllOWED");
            }

            else
            {
                printf("b is max");
            }
        }

        // else if (b > a && a == c)
        // {
        //     printf("b is max\n");
        //     printf("SAME VALUES ARE NOT ALLOWED\n");
        // }

        // else if (b == c)
        // {
        //     printf("SAME VALUES ARE NOT AllOWED");
        // }

        else
        {
            // if (c > a && a == c)
            // {
            //     printf("SAME VALUES ARE NOT AllOWED");
            // }

            // else
            // {
            //     printf("c is max");
            // }
            printf("c is max");
        }
    }
}