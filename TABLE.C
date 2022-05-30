#include<stdio.h>
#include<conio.h>
void main()
{ int n,i,tab;
clrscr();
printf("\nEnter any number:");
scanf("%d",&n);
printf("\nTable of %d is:",n);
for(i=1;i<=10;i++)
{   tab=n*i;
   printf("\n%d",tab);

}

getch();

}