#include<stdio.h>
#include<string.h>
int main() {
   int a[1000],b[1000],i,j,N,temp;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       for(j=i+1;j<N;j++)
       {
           if(a[i]==a[j])
           {
               b[i]=a[i];
           }
       }
   }
   for (i=0;b[i]!='\0';++i) 
    {
        for (j=i+1;b[j]!='\0';++j)
        {
            if (b[i]>b[j]) 
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
       printf("%d",b[i]);
    }
    
}
