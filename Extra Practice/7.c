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

    if (a > b && a > c && a > d && a > e)
    {
         printf("a is max");
    }

    else if (b > c && b > d && b > e && b > a)
    {
        printf("b is max");
    }

    else if (c > d && c > e && c > a && c > b)
    {
        printf("c is max");
    }

    else if (d > e && d > a && d > b && d > c)
    {
        printf("d is max");
    }

    else
    {
       printf("e is max");
    }
}