// one int, one double, one char.
#include<stdio.h>
#include<conio.h>
void main()
{ int a;
  double b;
  char c;
  clrscr();
  printf("\nEnter one int ");
  scanf("%d",&a);
  printf("\nEnter one double ");
  scanf("%lf",&b);
  printf("\nEnter one char ");
  scanf(" %c",&c);
  printf("\n%d\t%lf\t%c",a,b,c);
  getch();





}