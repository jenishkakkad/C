#include <stdio.h>

int main()

{
    int start,end;

    printf("Enter the First Number:");
    scanf("%d", &start);

    printf("Enter the Second Number:");
    scanf("%d", &end);

    do
    {
        if (start % 2 == 0)
        {
            printf("%d\n",start);
        }

        else
        {
            printf("MERI ZUMKHEWALIBIWI \t NAKHRADI \t MODERN\n");
            printf("AB AUR KYA CHAHIYE \t LIFE MAIN\n");
        }
        
         start++;
    } 
    
    while (start <= end);
     
        // if (start % 2 == 0)
        // {
        //     printf("%d\n",start);
        // }

        // else
        // {
        //     printf("%d\n", start);
        // }

       
    }
    

//     while (start <= end)
//     {
//         if (start % 2 == 0)
//         {
//             printf("%d\n",start);
//         }

//         // else
//         // {
//         //     printf("%d\n", start);
//         // }

//         start++;
//     }
// }