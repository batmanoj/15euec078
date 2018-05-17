#include<stdio.h>
int main() {
   int a[1000],i,j,N,c,b=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for (i=0;a[i]!='\0';i++) 
    {
        c=0;
        for (j=0;a[j]!='\0';j++)
        {
            if (a[j]==a[i]) 
            {
                c++;
            }
        }
        if(c!=1)
        {
            break;
        }
    }
    if(b=0)
    {
        printf("unique");
    }else
    {
        printf("%d",a[i]);
    }
}
