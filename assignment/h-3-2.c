#include<stdio.h>
int main() 
{
   int a[100000],i,out[100000],n,j,x;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {x=1;
       for(j=0;j<n;j++)
       {
           if(i!=j)
           {
               x*=a[j];
           }
       }out[i]=x;
   }
   for(i=0;i<n;i++)
   {
       printf("%d ",out[i]);
   }
}
