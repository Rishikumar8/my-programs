//WAP to check whether a character is vowel or consonant.
#include<stdio.h>
#include<conio.h>
void main()
{
   char c;
   int lowercase,uppercase;
   clrscr();
   printf("Enter any character:");
   scanf("%c",&c);
   lowercase=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
   uppercase=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
   if(lowercase||uppercase)
   printf("%c is a vowel",c);
   else
   printf("%c is a consonant",c);
   getch();
}