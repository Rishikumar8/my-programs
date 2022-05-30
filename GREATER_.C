//Greater number between two numbers using ternary operator.
#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,grt;
  clrscr();
  printf("Enter two different numbers:");
  scanf("%d%d",&a,&b);
  grt=a>b? a:b;
  printf("Greater number is %d",grt);
  getch();
}