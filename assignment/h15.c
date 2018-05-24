#include<stdio.h>
int main() 
{
   int a[100000],i,N,sum=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       sum+=a[i];
   }
   printf("%d",sum);
}
