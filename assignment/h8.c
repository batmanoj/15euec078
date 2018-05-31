#include<stdio.h>
int main() 
{
   int a[1000],n,i,j,k,s;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           s=a[i]+a[j];
           for(k=0;k<n;k++)
           {
               if(s==a[k])
               {
                   printf("%d %d %d\n",a[i],a[j],s);
               }
           }
       }
   }
}
