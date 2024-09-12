#include <stdio.h>

int main()

{
   int no,a = 1;

   printf("Enter any number:");
   scanf("%d",&no);

   while (a <= no)
   {
     printf("%d\n",a);
     a++;
   }
   
}