#include<stdio.h>
int main() 
{
   int a[100000],i,N,K;
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       if(a[i]==K)
       {
          printf("%d",a[i]); 
       }
       
   }
}
