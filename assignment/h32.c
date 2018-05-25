#include<stdio.h>
int main() 
{
   int a[100000],b[100000],i,N,k,temp[100000],x,c;
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
