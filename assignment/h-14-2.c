#include<stdio.h>
#include<string.h>

int main() 
{
   char s[100];
   int i,sum=0;
   scanf("%s",s);
   for(i=0;i<strlen(s);i++)
   {
       sum+=s[i];
   }
   printf("%d",sum);
  
}
