#include<stdio.h>

int main()

{
    int a,b,c;

    printf("Enter value of JK,JR,RK:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a < b)
    {
        if (a < b)
        {
           printf("a is min");
        }

        else
        {
            printf("b is min");
        }
        
    }

    else
    {
        if (b < c)
        {
            printf("b is min");
        }

        else
        {
            printf("c is min");
        }
        
    }
}