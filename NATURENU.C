#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("enter the n num");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=i;
}
printf("the sum of first %d numbers is %d",n,sum);
getch();
}