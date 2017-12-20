#include<stdio.h>
void main() 
{
    int h1,h2,m1,m2,x;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    x=((h1*60)+m1)-((h2*60)+m2);
    printf("%dmins(%d:%d)",x,x/60,x%60);

}
