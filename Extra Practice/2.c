#include<stdio.h>

int main()

{
    int JK,JR,RK;

    printf("Enter value of JK,JR,RK:");
    scanf("%d",&JK);
    scanf("%d",&JR);
    scanf("%d",&RK);

    if(JK>JR && JK==RK)
    {
        if (JK>RK && JK==JR)
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
        if (JR>RK && JR==JK)
        {
            printf("JR is max");
        }

        else
        {
            printf("RK is max");
        }
        
    }
}