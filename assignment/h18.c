#include<stdio.h>
int main() 
{
   int a[1000][1000],N,i,j,c=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           if(a[i][j]==1)
           {
               if(a[i-1][j-1]==0 &&a[i-1][j]==0 &&a[i-1][j+1]==0)
               if(a[i][j-1]==0 &&a[i][j+1]==0)
               if(a[i+1][j-1]==0 &&a[i+1][j]==0 &&a[i+1][j-1+1]==0)
               {
                   c++;
               }
           }
       }
   }
   printf("%d",c);
}
