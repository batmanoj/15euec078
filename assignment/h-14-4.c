#include<stdio.h>

int main() 
{
   int N,M,i,j,x=0,y=0,a[500],b[500],z=0;
   scanf("%d %d",&N,&M);
   for(i=1;i<=N/2;i++)
    {
        if(N%i==0)
        {
            a[x]=i;
            x++;
        }
    }
    for(j=1;j<=M/2;j++)
    {
        if(M%j==0)
        {
            b[y]=j;
            y++;
        }
    }
    for(x=0;x<N;x++)
      {
         for(y=0;y<M;y++)
         {
             if(a[x]==b[y])
             z++;
         }
      }
      if(z==1)
      {
          printf("yes");
      }else
      {
          printf("no");
      }
   
}
