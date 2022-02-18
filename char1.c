//WAP to accept any alphabet change it's case.(There are no change other character).
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\nEnter Any Character:");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        if(isalpha(ch)) //isalpha fun. is Built in function.
        {
            printf("Given Character:%c\n",ch);
            printf("After Case Changing:%c\n",ch+32);
        }
        else
        {
            printf("Given Character:%c\n",ch);
            printf("After Case Changing:%c\n",ch-32);
        }
    }
    else
    {
        printf("Invalid Input:Please provide an Alphabet\n");
    }
    return 0;
}