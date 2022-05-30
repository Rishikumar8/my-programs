//Write a porogram to add Numbers and print sum.
#include<stdio.h>
#include<conio.h>
void main()
{ float a,b,sum;
  int c;
  printf("Enter first float Number =");
  scanf("%f",&a);
  printf("Enter second float Number =");
  scanf("%f",&b);
  printf("Enter third int Number =");
  scanf("%d",&c);
  sum=a+b+c;
  printf("\nThe sum is %f",sum);
  getch();
}