#include<stdio.h>
#include<conio.h>
void main()
{ char a;
  int b;
  clrscr();
//CONVERT CHARACTER TO ASCII VALUE
printf("Enter Any Character = \n");
scanf("%c",&a);
printf("\nASCII value Of %c is %d",a,(int)a);
//CONVERT NUMBER TO ASCII VALUE

printf("\nEnter Any Number = \n");
scanf("%d",&b);
printf("\n ASCII Value Of %d is %d",b,(int)b);
getch();
}