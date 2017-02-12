#include<stdio.h>
#include<conio.h>
void main()
{
char vowel;
clrscr();
printf("input character\n") ;
scanf("\n%c",vowel);
switch(vowel)
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("\nis vowel \n",vowel);
break;
default:
printf("\nis not vowel \n",vowel); }
getch();
 }