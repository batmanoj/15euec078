#include<stdio.h>
#include<string.h>
main() 
{
    int i,j,c,k;
    char a[10];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
         c=1;
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                c++;
                for(k=j+1;a[k]!='\0';k++)
                a[k-1]=a[k];
                a[k-1]='\0';
                
                
            }
        }printf("%c-%d\n",a[i],c);
    }
}
