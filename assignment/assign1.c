#include<stdio.h>
main() 
{
    char a[10],t;
    int i;
    gets(a);
    for(i=0;a[i+1]!='\0';i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    puts(a);
}
