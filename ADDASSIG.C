//WAP to perform addition of two user define numbers.
#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,sum;
  clrscr();
  printf("Enter Two Numbers:");
  scanf("%d%d",&a,&b);
  sum=a+b;
  printf("\nSum of %d and %d is=%d",a,b,sum);
  getch();

}