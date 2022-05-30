//WAP to find age for votting.
#include<stdio.h>
#include<conio.h>
void main()
{  int a;
   clrscr();
   printf("\nEnter your age:");
   scanf("%d",&a);
   if(a>=18)
   printf("You are eligible for voting");
   else
   printf("You are not eligible ");
   getch();
}