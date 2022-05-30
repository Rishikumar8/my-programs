//Write a program to Enter student marks and print average and percent.
#include<stdio.h>
#include<conio.h>
void main()
{ char name[20];
  int a,b,c,d,e,sum,aveg,percent;
  clrscr();
  printf("\nEnter First Name =");
  scanf("%s",&name);
  printf("\nEnter English Marks out of 100 =");
  scanf("%d",&a);
  printf("\nEnter Hindi Marks out of 100 =");
  scanf("%d",&b);
  printf("Enter Maths Marks out of 100 =");
  scanf("%d",&c);
  printf("Enter Science Marks out of 100 =");
  scanf("%d",&d);
  printf("Enter Sanskrit Marks out of 100 =");
  scanf("%d",&e);

  sum=a+b+c+d+e;
  aveg=sum/5;
  percent=(a+b+c+d+e)/5;
  printf("Name=Rishi");
  printf("\nThe sum is= %d",sum);
  printf("\nThe Average is= %d",aveg);
  printf("\nThe Percent is=%d",percent);
  printf("\n Rishi You are Pass:");
  getch();


}