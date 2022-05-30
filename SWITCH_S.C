#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   clrscr();
   printf("\nEnter an integer number:");
   scanf("%d",&i);
   switch(i>10)
   {
      case 5>3: printf("\nA");break;
      case 3<2: printf("\nB");break;
      case 7!=7: printf("\nC");break;      //7:
      case 8<2: printf("\nD");break;       //8:
      default: printf("\nE");break;
   }
   getch();
}









}