#include <stdio.h>
#include<conio.h>
void main()
{
  char n;
  clrscr();
printf("\n enter the alphabet");
  scanf("%c",&n);
  if((n>='a'&&n<='z')||(n>='A'&&n<='Z') )
    printf("\n the given thing is alphabet");
 else
    printf("\n the given thing is not alphabet");
	getch();
}