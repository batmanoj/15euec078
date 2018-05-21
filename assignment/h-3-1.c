#include<stdio.h>
int main() {
   int a[1000][1000],N,M,i,j,x,y;
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
           if(a[i][j]==0)
           {
               x=i;
               y=j;
               for(i=0;i<N;i++)
                {
                for(j=0;j<M;j++)
                {
                    if(i==x || j==y)
                    {
                        a[i][j]=0;
                    }
                }
                }
           }
       }
   }
   
   for(i=0;i<N;i++)
   {
       for(j=0;j<M;j++)
       {
           printf("%d",a[i][j]);
       }printf("\n");
   }
}
