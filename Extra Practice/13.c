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

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("a is max");
                }

                else
                {
                    printf("e is max");
                }
                
            }

            else
            {
                if (d > e)
                {
                    printf("d is max");
                }

                else
                {
                    printf("e is max");
                }
                
            }
            
        }

        else
        {
            if(c > d)
            {
                if (c > e)
                {
                    printf("c is max");
                }

                else
                {
                    printf("e is max");
                }
                
            }

            else
            {
                if (d > e)
                {
                    printf("d is max");
                }

                else
                {
                    printf("e is max");
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
                if (b > e)
                {
                    printf("b is max");
                }

                else
                {
                    printf("e is max");
                }
                
            }

            else
            {
                if (d > e)
                {
                    printf("d is max");
                }

                else
                {
                    printf("e is max");
                }
                
            }  
            
        }

        else
        {
           if (c > d)
           {
              if (c > e)
              {
                 printf("c is max");
              }

              else
              {
                printf("e is max");
              }
              
           }

           else
           {
             if(d > e)
             {
                printf("d is max");
             }

             else
             {
                printf("e is max");
             }
           }
              
        }
        
    }
    
}