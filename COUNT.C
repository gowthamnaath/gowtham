#include<stdio.h>
#include<conio.h>
void main()
{
int n,count;
printf("enter the n number");
scanf("%d",n);
while(n!=0)
{
n=n/10;
count++;
}
printf("the digits in int is %d",count);
getch();
}