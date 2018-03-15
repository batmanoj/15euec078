#include<stdio.h>
int main() 
{
    int n,i,x;
    scanf("%d",&n);
    if(n>6)
    {
        do
        {
            x=n%6;
        }while(x>6);
        i=x;
    }else
    {
        i=n;
    }
    
    if(i==1||i==6||i==0)
    {
        printf("WS");
    }else if(i==2||i==5)
    {
        printf("MS");
    }else if(i==3||i==4)
    {
        printf("AS");
    }
    
   
}

