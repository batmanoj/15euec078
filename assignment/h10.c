#include<stdio.h>
int main() 
{
   int A[1000000],B[1000000],N,M,i,j,c=0;
   scanf("%d%d",&N,&M);
   for(i=0;i<N;i++)
   {
       scanf("%d",&A[i]);
   }
   for(j=0;j<M;j++)
   {
       scanf("%d",&B[j]);
   }
   for(j=0;j<M;j++)
   {
       for(i=0;i<N;i++)
       {
           if(B[j]==A[i])
           {
               c++;
               break;
           }
       }
   }
   if(c==M)
   {
       printf("YES");
   }else
   {
       printf("NO");
   }
   
}
