//WAP to calculate simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{ float amt,rate,time,si;
  clrscr();                              //formula si=amount*rate*time/100
  printf("Enter amount:");
  scanf("%f",&amt);
  printf("Enter rate:");
  scanf("%f",&rate);
  printf("Enter time:");
  scanf("%f",&time);
  si=(amt*rate*time)/100;
  printf("\nSimple interest=%f",si);
  getch();

}