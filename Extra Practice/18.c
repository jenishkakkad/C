#include<stdio.h>

int main()

{
    int JK,JR,RK;

    printf("Enter value of JK,JR,RK:");
    scanf("%d",&JK);
    scanf("%d",&JR);
    scanf("%d",&RK);

    if(JK>JR)
    {
        if (JK>RK)
        {
           printf("JK is max");
        }

        else
        {
            printf("RK is max");
         }
        
    }
    
    else
    {
        if (JR>RK)
        {
            printf("JR is max");
        }

        else
        {
            printf("RK is max");
        }
        
    }
}