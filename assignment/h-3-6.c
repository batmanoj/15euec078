#include<stdio.h>

int main() {
   int a[10000],b[100000],n,i,j=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
       b[j]=a[i];
       j++;
   }
   for(i=0;i<n;i++)
   {
       printf("%d->",b[i]);
   }
   
}
