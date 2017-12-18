#include<stdio.h>
int count=1;
void func()
{
printf("%d",count);
}
int main()
{
int count=2;
if(count==2)
{
int count=3;
printf("%d",count);
}
printf("%d",count);
func();
return 0;
}
