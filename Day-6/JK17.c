#include <stdio.h>

int main()

{
   int no;

   printf("Enter any number:");
   scanf("%d",&no);

   while (no >= 1)
   {
     printf("%d\n",no);
     no--;
   }
   
}