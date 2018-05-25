#include<stdio.h>
int main() 
{
   int a[100000],i,N,p=1;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       p*=a[i];
   }
   printf("%d",p);
}
