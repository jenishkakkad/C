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
                printf("b and c are is min\n");
            }

            else

            {
                if (a > b && a > c && b < c && b < a)
                {
                    printf("a is max\n");
                    printf("b is min\n");
                }
                
                else
                {
                    printf("a is max\n");
                }
    
            }
        }

        else
        {
            if (a == c)
            {
                printf("SAME VALUES ARE NOT ALLOWED\n");
                printf("a and c are max\n");
            }

            else
            {
                printf("c is max\n");
                printf("b is min\n");
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
            printf("b and c are max\n");
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
            printf("c is max\n");
            printf("a and b are is min");
        }

        else
        {
            printf("SAME VALUES ARE NOT ALLOWED\n");
            printf("a and b are max\n");
            printf("c is min");
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
                printf("SAME VALUES ARE NOT AllOWED\n");
                printf("a and c are is min\n");
            }

            else
            {
                printf("b is max\n");
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
            printf("c is max\n");
            // printf("b is min\n");
        }
    }

    if (a < b)
    {
        if (a < b)
        {
            if (b > a && a == c)
            {
                // printf("b is max\n");
                // printf("SAME VALUES ARE NOT AllOWED\n");
                // printf("a and c are is min\n");
            }

            else
            {
                if (c < a && c < b)
                {
                    printf("c is min");
                }

                else
                {
                    printf("a is min\n");
                }
            }
        }

        else
        {
            printf("b is min\n");
        }
    }

    // else if (a == b || a == c || b == c || a == b == c)
    // {
    //     printf("SAME VALUES ARE NOT AllOWED\n");
    // }

    else
    {
        if (b < c)
        {
            if (b < c && a == c)
            {
                printf("b is min\n");
                // printf("SAME VALUES ARE NOT AllOWED\n");
            }

            else
            {
                // printf("b is min\n");
            }
        }

        // else if (a > b && a > c && b < c)
        // {
        //     printf("a is max\n");
        //     printf("b is min\n");
        // }

        // else if (a > b && a > c && c < b)
        // {
        //     printf("a is max\n");
        //     printf("c is min\n");
        // }

        else
        {
            if (a == b || a == c || b == c || a == b == c)
            {
                // printf("SAME VALUES ARE NOT AllOWED\n");
            }

            else
            {
                printf("c is min\n");
                // printf("a is max\n");
            }
        }
    }
}