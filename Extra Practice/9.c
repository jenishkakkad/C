#include <stdio.h>

int main()

{
    int a, b, c, d, e, f, g, h, i, j;

    printf("Enter value of a:");
    scanf("%d",&a);
    
    printf("Enter value of b:");
    scanf("%d",&b);

    printf("Enter value of c:");
    scanf("%d",&c);

    printf("Enter value of d:");
    scanf("%d",&d);

    printf("Enter value of e:");
    scanf("%d",&e);

    printf("Enter value of f:");
    scanf("%d",&f);

    printf("Enter value of g:");
    scanf("%d",&g);

    printf("Enter value of h:");
    scanf("%d",&h);

    printf("Enter value of i:");
    scanf("%d",&i);

    printf("Enter value of j:");
    scanf("%d",&j);

    if (a > b && a > c && a > d && a > e && a > f && a > g && a > h && a > i && a > j)
    {
         printf("a is max");
    }

    else if (b > c && b > d && b > e && b > f && b > g && b > h && b > i && b > j && b > a)
    {
        printf("b is max");
    }

    else if (c > d && c > e && c > f && c > g && c > h && c > i && c > j && c > a && c > b)
    {
        printf("c is max");
    }

    else if (d > e && d > f && d > g && d > h && d > i && d > j && d > a && d > b && d > c)
    {
        printf("d is max");
    }

    else if (e > f && e > g && e > h && e > i && e > j && e > a && e > b && e > c && e > d)
    {
        printf("e is max");
    }

    else if (f > g && f > h && f > i && f > j && f > a && f > b && f > c && f > d && f > e)
    {
        printf("f is max");
    }

    else if (g > h && g > i && g > j && g > a && g > b && g > c && g > d && g > e && g > f)
    {
        printf("g is max");
    }

    else if (h > i && h > j && h > a && h > b && h > c && h > d && h > e && h > f && h > g)
    {
        printf("h is max");
    }

    else if (i > j && i > a && i > b && i > c && i > d && i > e && i > f && i > g && i > h)
    {
        printf("i is max");
    }
    
    else
    {
        printf("j is max");
    }
}