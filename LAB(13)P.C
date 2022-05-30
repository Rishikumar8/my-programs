#include<stdio.h>
#include<conio.h>
void main()
{ char c;
  int a,b;
  clrscr();

  printf("Enter any alphabet:");
  scanf("%c",&c);

  a=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
  b=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');

  if(a||b)
  printf("%c is a vowel",c);

  else
  printf("%c is a consonant",c);
  getch();















}