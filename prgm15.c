#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,m=20,n=40;
printf("print even num");
for(num=m;num<=n;num++;)
{
if(num%2==0)
{
printf("%d",num);
}
}
getch();
}
