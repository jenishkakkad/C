#include<stdio.h>

int main()

{
    int a,b,c,d,e;

    printf("Enter value of JK,JR,RK:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

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

    if(d>a)
    {
        if (d>b)
        {
           printf("d is max");
        }
        

        else
        {
            printf("b is max");
         }

         if ()
         {
            
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