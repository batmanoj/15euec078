#include<stdio.h>

int main() 
{
   int i,n,count=0;
   scanf("%d",&n);
   while(n!=0)
   {n/=10;
   count++;
       
   }printf("%d",count);
}
