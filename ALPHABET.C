//WAP to check wheather character is an alphabet or not.
#include<stdio.h>
#include<conio.h>
void main()
{
   char c;
   clrscr();
   printf("Enter any one character:");
   scanf("%c",&c);
   if((c>='a' && c<='z') ||(c>='A'&& c<='Z'))
   printf("\n%c is an alphabet",c);
   else
   printf("\n%c is not an alphabet",c);
   getch();
}