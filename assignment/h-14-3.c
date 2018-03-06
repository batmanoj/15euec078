#include<stdio.h>
#include<string.h>

int main() 
{
     char s[100];
     int x=0,i;
     scanf("%[^\n]s",s);
     for(i=0;i<strlen(s);i++)
     {x++;
         if(s[i]==32)
         {
             break;
         }
     }
     for(i=x;i<strlen(s);i++)
     {
         printf("%c",s[i]);
     }printf(" ");
     for(i=0;i<x;i++)
     {
         printf("%c",s[i]);
     }
     
   
}
