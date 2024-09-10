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
        if (a > c && b==c)
        {
            printf("a is max\n");
            printf("SAME VALUES ARE NOT AllOWED");
        }

        else
        {
            printf("RK is max");
        }
    }

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
    

    else
    {
        if (b > c)
        {
            printf("JR is max");
        }

        else
        {
            printf("RK is max");
        }
    }
}