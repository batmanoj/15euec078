#include<stdio.h>
#include<string.h>
int main() 
{
   int c=0;
   char s[100000];
   scanf("%s",&s);
   for(int i=0;i<strlen(s);i++)
   {
       if(s[i]=='a' && s[i+1]=='b')
       {
           c++;
       }
   }
   printf("%d",c);
   
}
