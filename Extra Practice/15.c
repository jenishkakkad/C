#include <stdio.h>

int main()

{
    int a, b, c;

    printf("Enter value of JK,JR,RK:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a == c)
    {
        if (a > c && a == b)
        {
            printf("a is max");
        }

        else
        {
            printf("c is max");
        }
    }

    else if (a == b || a == c || b == c || b == a || a==b==c)
    {
        printf("SAME VALUES ARE NOT ALLOWED");
    }

    else
    {
        if (b > c && c == a)
        {
            printf("b is max");
        }

        else
        {
            printf("c is max");
        }
    }
}