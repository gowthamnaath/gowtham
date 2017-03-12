#include<stdio.h>
#include<conio.h>
void main()
{
int q,a=1;
clrscr();
scanf("%d",&q);
while(q>=1)
{
a=a*q;
q--;
}
printf("factorial given num is %d",a);
getche();
}

