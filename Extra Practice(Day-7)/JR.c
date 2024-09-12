#include <stdio.h>

int main()

{
    int user,gujarati_user;

    printf("Enter Any Number....\n");
    printf("1 Press English\n");
    printf("2 Press gujarati\n");
    printf("3 Press Hindi\n");

    scanf("%d",&user);

    switch (user)
    {
    case 1:
        printf("You are Press 1 English....\n");
        break;

    case 2:
        printf("You Are Press 2 Gujarati....\n");

        printf("Switch Case 2....Option\n");
        printf("input 1 2 3");
        scanf("%d", gujarati_user);
        switch (gujarati_user)
        {
        case 1:
            printf("Jenish");
            break;

        case 2:
            printf("Mohit");
            break;

        case 3:
            printf("Kunj Sir");
            
        default:
            printf("Enter Valid Name...");
            break;
        }

        break;

    case 3:
        printf("You Are Press 3 Hindi....\n");
        break;

    default:
        printf("Enter Valid Option....\n");
        break;
    }
}