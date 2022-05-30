//WAP to check if a number is positive or negative.
#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  clrscr();
  printf("Enter any number:");
  scanf("%d",&num);
  if(num>0)
  printf("%d is positve number",num);
  else
  printf("%d is negative number",num);
  getch();
}