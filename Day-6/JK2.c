#include<stdio.h>

int main()

{
     int first,second,third;

     printf("Enter a value of the first number:");
     scanf("%d",&first);
     printf("Enter a value of the second number:");
     scanf("%d",&second);
     printf("Enter a value of the third number:");
     scanf("%d",&third);

    if (first < second)
    {
     //    printf("The minimum value is:%d\n", first);
    }

    else if (first < third)
    {
     //    printf("The minimum value is:%d\n", first);
    }

    else if (third < first)
    {
     //    printf("The minimum value is:%d\n", third);
    }

    else if (third < second)
    {
     //    printf("The minimum value is:%d\n", third);
    }

    else if (second < third)
    {
     //  printf("The minimum value is:%d\n", second);
    }

//     else if (second < first)
//     {
//       printf("The minimum value is:%d\n", second);
//     }    

    else
    {
     
     //    printf("The minimum value is:%d\n", second);
    }

    if(third < first)
    {
      if(second < third)
      {
          if(second < first)
          {
                printf("The minimum value is:%d\n", second);
          }
      }
    }

    if(first < third)
    {
      if(second < third)
      {
          if(second < first)
          {
                printf("The minimum value is:%d\n", second);
          }
      }
    }

    if(first < second)
    {
      if(third < first)
      {
          if(third < second)
          {
                printf("The minimum value is:%d\n", third);
          }
      }
    }
    
    if(second < first)
    {
      if(third < first)
      {
          if(third < second)
          {
                printf("The minimum value is:%d\n", third);
          }
      }
    }

    if(second < third)
    {
      if(first < second)
      {
          if(first < third)
          {
                printf("The minimum value is:%d\n", first);
          }
      }
    }

    if(third < second)
    {
      if(first < second)
      {
          if(first < third)
          {
                printf("The minimum value is:%d\n", first);
          }
      }
    }

//     if(se < second)
//     {
//       if(third < first)
//       {
//           if(third < second)
//           {
//                 printf("The minimum value is:%d\n", second);
//           }
//       }
//     }

    else
    {

     //   printf("The minimum value is:%d\n", third);
    }

    

     // (first < second) ? printf("The minimum value is:%d\n",first) : (first < third) ? printf("The minimum value is:%d\n",first) : (third < first) ? printf("The minimum value is:%d\n",third) : (third < second) ? printf("The minimum value is:%d\n",third) : printf("The minimum value is:%d\n",second);

    //  (second < third) ? (first < second) ? (first < third)
}