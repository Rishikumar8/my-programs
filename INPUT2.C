//two float, one long double,two char.
#include<stdio.h>
#include<conio.h>
void main()
{ float a,b;
  long double c;
  char d,e;
  clrscr();
  printf("\nEnter two float ");
  scanf("%f%f",&a,&b);
  printf("\nEnter one long double ");
  scanf("%Lf",&c);
  printf("\nEnter two char ");
  scanf(" %c %c",&d,&e);
  printf("\n%f\t%f\t%Lf\t%c\t%c",a,b,c,d,e);
  getch();
}