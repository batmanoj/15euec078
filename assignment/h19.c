#include<stdio.h>
int main() 
{
   int a[1000][1000],N,K,i,j,l=0,c=1;
   scanf("%d%d",&N,&K);
   for(i=0;i<N;i++)
   {
       for(j=0;j<K;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   while(l<N)
   {
   for(i=1;i<N;i++)
   {
       for(j=0;j<K;j++)
       {
           if(a[i][j]==1)
           {
               if(a[0][l]==a[i][j])
               {
                   c++;
                   break;
               }
           }
       }
   }
   if(c==N)
   {
       printf("%d ",a[0][l]);
       l++;
   }
   }
   
}
