#include <stdio.h>

int main()

{
   int sum=0,i,N;

   printf("Enter the Number:");
   scanf("%d",&N);

   for (i = 1; i <=N; i++)
   {
     sum=sum+i;
     printf("%d\t",sum);
   }   

  //  printf("%d",sum);
}



// #include <stdio.h>

// int main()

// {
//    int start,N,v1=-1,v2=1,v3;

//    printf("Enter the Number:");
//    scanf("%d",&N);

//    for ( start = 0; start <= N; start++) 
                                         
//    {
//       v3=v1+v2;
//       printf("%d",v3);//0
//       v1=v3+v2;
//     //   v2=v3;
//    }
   
// }