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

    else if (a==b || a==c || a==d || b==c || b==d || b==a || c==d)
    {
        printf("SAME VALUES ARE NOT ALLOWED");
    }

    // else if (c > d && c > a && c > b)
    // {
    //     printf("c is max");
    // }
    
    
    

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

    
}