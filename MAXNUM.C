#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int a[20],i,j,m,temp,c,sum=0;
clrscr();
scanf("ld",&m);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[j]>a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<m-1;i++)
{
temp=a[i+1];
c=0;
while(temp!=0)
{
temp=temp/10;
c++ ;
}
sum=(sum*pow(10,c))+a[i+1];
}
printf("\nld",sum);
getch();
}