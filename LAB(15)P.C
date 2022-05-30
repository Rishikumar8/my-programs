//WAP to
#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,sum,sub;
  printf("Enter First Number:");
  scanf("%d",&a);
  printf("Enter Second Number:");
  scanf("%d",&b);
  if(a==b)
  { sum=a+b;
    printf("Sum of two number is=%d",sum);
  }
  else
  {
       sub=a-b;
       printf("subtraction of two numbers is=%d",sub);

  }
  getch();

}