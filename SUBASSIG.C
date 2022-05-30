//WAP to perform Subtraction of two user define numbers.
#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,sub;
  clrscr();
  printf("Enter Two Numbers:");
  scanf("%d%d",&a,&b);
  sub=a-b;
  printf("\nSubtraction of %d and %d is=%d",a,b,sub);
  getch();

}