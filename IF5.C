#include<stdio.h>
#include<conio.h>
void main()
{ int i;
  clrscr();
  printf("Enter A New Number \n");
  scanf("%d",&i);
  if(i>40)
  { if(i>50) printf("\nHello");
    else printf("\nNARMADE HAR");

  }
   else if(i>30)
  { if(i>35)printf("\nBye");
    else printf("\nGood Night");

  }
   else if(i>20)
  {
    if(i>25) printf("\nTata");
    else printf("\nOk");

  }
  else printf("\nHi");
  getch();
}