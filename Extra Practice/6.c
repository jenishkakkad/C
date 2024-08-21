#include<stdio.h>

int main()

{
    int a,b,c;

    printf("Enter value of a,b,c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>b)
    {
        if (a>c)
        {
           printf("a is max");
        }

        else
        {
            printf("c is max");
         }
        
    }

    else
    {
        if (b>c)
        {
            printf("b is max");
        }

        else
        {
            printf("c is max");
        }
        
    }
}