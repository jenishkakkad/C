#include <stdio.h>
//factrorial series : 1 2 6 24 120 .......
int main()

{
   int start,v1=0,v2=1,v3;      

   // printf("Enter the Number:");
   // scanf("%d",&N);

   for ( start = 1; start <= 5; start++)
   {

      v3=v2+v1;//1
               //2
               //6
               //24
               //120

      printf("%d\t",v3);

      v1=v1+1;  //v1=1,v1=v1+1      2+1=3               3+1=4               4+1=5
                //v1=2              v1=3                v1=4                v1=5

      v2=v3;    //v2=v3             v2=v3               v2=v3               v2=v3
                //v2=1              v2=2                v2=6                v2=24
                //v3=v2*v1          v3=v2*v1            v3=v2*v1            v3=v2*v1
                //v3=v2(1)*v1(2)    v3=v2(2)*v3(3)      v3=v2(6)*v1(4)      v3=v2(24)*v3(5)
                //v3=2              v3=6                v3=24               v3=120


//    for ( int col = start; col <=v3; col++)
//    {
//     printf("%d",col);
//    }
   
   }
//    printf("%d",start);
// printf("\n");
}