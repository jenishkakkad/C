#include <stdio.h>

int main()
{

    int user, user_2, user_3, user_4;

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

        scanf("%d", &user_2);

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
        printf("You Are Seleceted Graphics...\n");
        printf("1 figma\n");
        printf("2 photoshop\n");
        printf("3 canva\n");
        printf("4 video editing\n");

        scanf("%d", &user_3);

        switch (user_3)
        {
        case 1:
            printf("1 figma 20000\n");
            printf("2 case only\n");
            printf("3 no online payment\n");
            printf("4 plz select any one option\n");

            scanf("%d", &user_4);

            switch (user_4)
            {
            case 1:
                printf("ha riya madam 20000 fee che e khbr che mne");
                break;

            case 2:
                printf("ha yaar hve case ma j fee dys tmne");
                break;

            case 3:
                printf("ha madam nay online payment kris");
                break;

            case 4:
                printf("ha kru chu option select");
                break;

            default:
                printf("tu bhai khoti gaaru dema jenish");
                break;
            }
            break;

        case 2:
            printf("photoshop 25000");
            break;
        case 3:
            printf("canva 25000");
            break;
        case 4:
            printf("video editing 25000");
            break;
        default:
            printf("plz valid choose your option");
            break;
        }

        break;

    case 3:
        printf("You are Selected App Development....\n");

        break;

    default:
        printf("input not valid");
        break;
    }
}