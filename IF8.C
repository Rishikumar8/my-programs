#include<stdio.h>
#include<conio.h>
void main()
{ char c;
  clrscr();
  printf("Enter The Character:");
  scanf("%c",&c);
  if(c=='a'|| c=='e'|| c=='i'|| c=='0'|| c=='u')
  printf("\nCharacter is vowel");
  else
  printf("\nCharacter is consonant");
  getch();
  }