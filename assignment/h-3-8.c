#include<stdio.h>
#include<string.h>
int main() {
   char s[100000];
   int i,j,x;
   scanf("%[^\n]s",&s);
   for(i=0;i<=strlen(s);i++)
   {x=0;
       for(j=0;j<i;j++)
       {
           if(s[j]==s[i])
           {
               x=1;
           }
       }
       if(x==0)
       {
           printf("%c",s[i]);
       }
   }
   
}
