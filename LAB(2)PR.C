#include<stdio.h>
#include<conio.h>
void main()
{ int m1,m2,m3,percent;
char name[100];
clrscr();

printf("Enter Marks of English out of 100 = \n");
scanf("%d",&m1);

printf("Enter Marks of Hindi out of 100 = \n");
scanf("%d",&m2);

printf("Enter Marks of Maths out of 100 = \n");
scanf("%d",&m3);

printf("Enter Student Full Name = \n");
scanf("%s",&name);

percent=(m1+m2+m3)*100/300;
printf("\nThe percent of %s is %d",name,percent);
getch();

















}