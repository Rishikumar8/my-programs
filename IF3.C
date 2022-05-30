#include<stdio.h>
#include<conio.h>
void main()
{ int i;
  clrscr();
  printf("Enter A New Number \n");
  scanf("%d",&i);

  if(i>10)
  {
     printf("\nHello");
     printf("\nBye");
  }
  else
  {
      printf("\nHi");
      printf("\nTata");
  }
  getch();
}