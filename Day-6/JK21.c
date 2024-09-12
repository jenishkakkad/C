#include <stdio.h>

int main()

{
    int start,end;

    printf("Enter the First Number:");
    scanf("%d", &start);

    printf("Enter the Second Number:");
    scanf("%d", &end);

    while (start <= end)
    {
        if (start % 2 == 0)
        {
            printf("%d\n",start);
        }

        // else
        // {
        //     printf("%d\n", start);
        // }

        start++;
    }
}