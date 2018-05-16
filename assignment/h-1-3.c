#include<stdio.h>
#include<string.h>
int main() 
{
   int a[1000],b[1000],i,j,N,temp,k;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       if(a[i]==i)
       {
           printf("%d ",a[i]);
       }
   }
   
}
