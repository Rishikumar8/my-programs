//one int, one char, one float.
#include<stdio.h>
#include<conio.h>
void main()
{ int a;
  char b;
  float c;
  clrscr();
  printf("\nEnter one int");
  scanf("%d",&a);
  printf("\nEnter one char");
  scanf(" %c",&b);
  printf("\nEnter one float");
  scanf("%f",&c);
  printf("\n%d\t%c\t%f",a,b,c);
  getch();

}