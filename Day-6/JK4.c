#include <stdio.h>

int main()
{

    int user, user_2;

    printf("Enter Number In 1 2 3....\n");
    printf("1 For Full Stack Web Developement...\n");
    printf("2 Graphics...\n");
    printf("3 App Development...\n");

    scanf("%d", &user);

    switch (user)
    {
    case 1:
        printf("You Are Selected Full Stack Web Development...\n");
        printf("1 HTML\n");
        printf("2 CSS\n");
        printf("3 Jquery\n");
        printf("4 Java Script\n");
        printf("5 React\n");

        scanf("%d", user_2);

        break;
        switch (user_2)
        {
        case 1:
            printf("HTML 10000");
            break;
        case 2:
            printf("CSS 20000");
            break;
        case 3:
            printf("3 Jquery 30000");
            break;
        case 4:
            printf("4 Java Script 500000");
            break;
        case 5:
            printf("5 React 1000000");
            break;

        default:
            printf("input not valid");
            break;
        }

        break;

    case 2:
        printf("You Are Seleceted Graphics...");

        break;

    case 3:
        printf("You are Selected App Development....");

        break;

    default:
        printf("input not valid");
        break;
    }
}