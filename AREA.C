//WAP to calculate area of circle.
#include <stdio.h>
#include <conio.h>
void main()
{ int r;
clrscr();
  float area;
  printf("\nEnter Radius Of Circle:");
  scanf("%d",&r);
  area=3.14*r*r;
  printf("\nArea of Circle is:%f",area);
  getch();

}