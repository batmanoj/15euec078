#include<stdio.h>
int main() 
{
   int a[100000],i,n,j,k,x=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i!=j)
           {
               if(a[i]+a[j]==k)
               {
                   x=1;
                   break;
               }
           }
       }
   }
   if(x==1)
   {
       printf("YES");
   }else
   {
       printf("NO");
   }
   
}
