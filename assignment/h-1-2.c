#include<stdio.h>
#include<string.h>
int main() {
   int a[1000],b[1000],i,j,N,c=0,x=1,temp;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for (i=0;a[i]!='\0';++i) 
    {
        for (j=i+1;a[j]!='\0';++j)
        {
            if (a[i]>a[j]) 
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]!= a[i+1])
        {
            c+=a[i]*x;
            x*=10;
        }
    }
    printf("%d",c);
    
}
