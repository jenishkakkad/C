#include <stdio.h>

int main()

{
   int start,N,v1=-1,v2=1,v3;

   printf("Enter the Number:");
   scanf("%d",&N);

   for ( start = 0; start <= N; start++)
   {
      v3=v1+v2;
      printf("%d\t",v3);
      v1=v2;
      v2=v3;
   }
   
   // printf("%d",v3);
}