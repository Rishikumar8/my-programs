//WAP to perform Multiplication of two user define numbers.
#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,mul;
  clrscr();
  printf("Enter Two Numbers:");
  scanf("%d%d",&a,&b);
  mul=a*b;
  printf("\nMultiplication of %d and %d is=%d",a,b,mul);
  getch();

}