//WAP to accept any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    int Lc ,Uc;
    printf("\nEnter Any Character:\n");
    scanf("%c",&ch);
    Lc=(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u');
    Uc=(ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U');
    if(Lc||Uc)
    printf("%c is vowel",ch);
    else printf("%c is Consonant",ch);
}