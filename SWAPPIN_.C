//Swapping two numbers using temporary variables.
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,temp1;
  clrscr();
  printf("Enter First Number:");
  scanf("%d",&a);
  printf("Enter Second Number:");
  scanf("%d",&b);
  printf("\nNumber before swapping A=%d",a);
  printf("\nNumber before swapping B=%d",b);
  temp1=a;
  a=b;
  b=temp1;
  printf("\nNumber after swapping A=%d",a);
  printf("\nNumber after swapping B=%d",b);
  getch();
}