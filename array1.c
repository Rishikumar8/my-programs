//WAP to accept 5 numbers in any array and print it.
#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter Number:");
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements are:");
    for(i=0;i<5;i++)
    printf("\n%d",a[i]);
}