#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void permut(char *s,int x,int y)
{
    if(x==y)
    {
        printf("%s\n",s);
    }else
    {
        for(int i=x;i<=y;i++)
        {
            swap(s+x,s+i);
            permut(s,x+1,y);
            swap(s+x,s+i);
        }
    }
}
int main() 
{
   int l;
   char s[100000];
   scanf("%s",s);
   l=strlen(s);
   permut(s,0,l-1);
   
}
