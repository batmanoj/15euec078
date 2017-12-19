#include<stdio.h>
int max(int a[],int n)
{
int i;
int maxi=a[0];
for(i=1;i<n;i++)
{ 
if(a[i]>maxi)
    {
        maxi=a[i];
    }
}
return maxi;
}
int main()
{
    int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("%d",max(a,n));
}
