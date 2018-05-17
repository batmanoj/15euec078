#include<stdio.h>
int main() {
   int a[1000],i,j,N,c,b[10];
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for (i=0;a[i]!='\0';i++) 
    {
        if(a[i]%2==0 && i%2!=0 || a[i]%2!=0 && i%2==0 )
        {
            printf("%d ",a[i]);
        }
        
    }
}
