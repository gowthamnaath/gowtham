#include<stdio.h>
#include<conio.h>
void main()
{
int base,exponent;
int result=1;
clrscr();
printf("enter the base number:");
scanf("%d",&base);
printf("\n enter the exponent number:");
scanf("%d",&exponent);
while(exponent!=0)
{
result=result*base;
--exponent;
}
printf("\nAnswer=%d",result);
getch();
}