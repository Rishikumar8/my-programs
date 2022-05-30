//Write a program to find remainder and quotient.
#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,c,d;
  clrscr();
  printf("Enter dividend:");
  scanf("%d",&a);
  printf("Enter divisor:");
  scanf("%d",&b);
  //Computes Quotient
  c=a/b;
  //Computes Remainder
  d=a%b;
  printf("Quotient =%d\n",c);
  printf("Remainder =%d\n",d);
  getch();

}