#include<stdio.h>
#include<conio.h>
void main()
{ int n1,n2,sum,sub,mul,divd,avg;
printf("Enter any two numbers= \n");
scanf("%d%d",&n1,&n2);

sum=n1+n2;
printf("\nThe sum of A=%d and B=%d is %d",n1,n2,sum);

sub=n1-n2;
printf("\nThe subtraction of A=%d and B=%d is %d",n1,n2,sub);

mul=n1*n2;
printf("\nThe Multiplication of A=%d and B=%d is %d",n1,n2,mul);

divd=n1/n2;
printf("\nThe division of A=%d and B=%d is %d",n1,n2,divd);

avg=n1%n2;
printf("\nThe average of A=%d and B=%d is %d",n1,n2,avg);
getch();









}