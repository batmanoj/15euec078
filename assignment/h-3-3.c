#include<stdio.h>
int main() {
   int a[1000][1000],N,M,i,j,sum=0;
   scanf("%d%d",&N,&M);
   for(i=0;i<N;i++)
   {
       for(j=0;j<M;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<N;i++)
   {
       for(j=0;j<M;j++)
       {
           if(i==j)
           {
               sum+=a[i][j];
           }
       }
   }
   
   printf("%d",sum);
       
}
