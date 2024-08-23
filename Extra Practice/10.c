#include <stdio.h>

int main()

{
    int a, b, c, d;

    printf("Enter value of JK,JR,RK,KJ:");
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
                if (c > b)
                {
                    printf("c is max");
                }

                else
                {
                    printf("b is max");
                }
                
            }

            else
            {
                if (d > a)
                {
                    printf("d is max");
                }

                else
                {
                    printf("a is max");
                }
                
            }
        }
    }

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