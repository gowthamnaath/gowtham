#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,reverse=0;
clrscr();
printf("enter numbers is palindrome or not\n");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(n==reverse)
printf("%d is palindrome number",n);
else
printf("%d is palindrome not number",n);
getch();
}
