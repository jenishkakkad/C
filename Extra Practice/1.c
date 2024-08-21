#include<stdio.h>

int main()

{
    int JK,JR,RK;

    printf("Enter value of JK,JR,RK:");
    scanf("%d",&JK);
    scanf("%d",&JR);
    scanf("%d",&RK);

    if(JK<JR)
    {
        if (JK<RK)
        {
           printf("JK is min");
        }

        else
        {
            printf("RK is min");
        }
        
    }

    else
    {
        if (JR<RK)
        {
            printf("JR is min");
        }

        else
        {
            printf("RK is min");
        }
        
    }
}