#include<stdio.h>
#include<conio.h>
void main()
{ int m1,m2,m3,percent;
  char  name[100];
  clrscr();
  printf("Enter Marks of English out of 100 = \n");
  scanf("%d",&m1);
  printf("Enter Marks of Hindi out of 100 = \n");
  scanf("%d",&m2);
  printf("Enter Marks of Maths out of 100 = \n");
  scanf("%d",&m3);
  printf("Enter Studen First Nmae = \n");
  scanf("%s",name);
  percent=(m1+m2+m3)*100/300;
  printf("\nThe percent of %s is %d",name,percent);
  if(percent>80)
  printf("\nMerit Division");

  if(percent>=60&& percent<=79)
  printf("\nFirst Division");

  if(percent>=50 && percent<=59)
  printf("\nSecond Division");

  if(percent>=40 && percent<=49)
  printf("\nThird Division");

  if(percent<=39)
  printf("\nFail");
  getch();





















}