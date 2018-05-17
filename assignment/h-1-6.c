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
        c=0;
        for (j=0;a[j]!='\0';j++)
        {
            if (a[j]==a[i]) 
            {
                c++;
            }
        }
        if(c>=2)
        {
           b[1]=a[i];
           break;
        }
    }
    if(b[1]!='\0')
    {
        printf("%d",a[i]);
    }else
    {
        printf("unique");
    }
    
}
