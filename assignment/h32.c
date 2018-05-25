#include<stdio.h>
int main() 
{
   int a[100000],i,N;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   if(N%2==0)
   {
       printf("%d",N-2);
   }else
   {
       printf("%d",N-1);
   }
   
}
