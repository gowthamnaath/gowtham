#include<stdio.h>
#include<string.h>
int main()
{
int a[50];
printf("enter the string:");
gets(a);
strrev(a);
printf("reverse string:%s",a);
return 0;
}