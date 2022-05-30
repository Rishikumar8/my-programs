//WAP to calculate area of rectangle.
#include <stdio.h>
#include <conio.h>
void main()
{

  float B,H,area;
  clrscr();
  printf("\nEnter the Base:");
  scanf("%f",&B);
  printf("\nEnter the Height:");
  scanf("%f",&H);
  area=(B*H)/2;
  printf("\n\nArea of traingle is:%f",area);
  getch();

}