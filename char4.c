//WAP to accept any character using getch(),getche()and getchar.
#include<stdio.h>
int main()
{
    char a;
    printf("\nEnter Character:");
    a=getch();
    printf("\nYou entered:%c",a);
    printf("\nEnter character:");
    a=getche();
    printf("\nYou entered:%c",a);
    printf("\nEnter Character:");
    a=getchar();
    printf("\nYou entered:%c",a);
    return 0;
}